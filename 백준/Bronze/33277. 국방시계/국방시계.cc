#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, M;
    if(!(cin >> N >> M)) return 0;
    long long total_minutes = (M * 24LL * 60LL) / N;
    long long HH = total_minutes / 60;
    long long MM = total_minutes % 60;
    cout << setw(2) << setfill('0') << HH << ':' << setw(2) << setfill('0') << MM << '\n';
    return 0;
}