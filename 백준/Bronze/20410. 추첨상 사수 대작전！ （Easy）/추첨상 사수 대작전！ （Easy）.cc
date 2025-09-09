#include <iostream>
using namespace std;

long long exgcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) { x = 1; y = 0; return a; }
    long long x1, y1;
    long long g = exgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

long long modinv(long long a, long long m) {
    long long x, y;
    long long g = exgcd(a, m, x, y);
    if (g != 1 && g != -1) return -1;
    x %= m;
    if (x < 0) x += m;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long m, Seed, X1, X2;
    if (!(cin >> m >> Seed >> X1 >> X2)) return 0;

    long long a, c;
    long long d = (X1 - Seed) % m;
    if (d < 0) d += m;
    if (d == 0) {
        a = 0;
        c = X1 % m;
    } else {
        long long num = (X2 - X1) % m;
        if (num < 0) num += m;
        long long inv = modinv(d % m, m);
        a = (num * inv) % m;
        c = (X1 - (a * (Seed % m)) % m) % m;
        if (c < 0) c += m;
    }

    cout << a << ' ' << c << '\n';
    return 0;
}