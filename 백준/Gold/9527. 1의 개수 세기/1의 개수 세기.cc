#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countOnes(ll n) {
    if (n <= 0) return 0;
    
    ll bitLength = 0;
    ll temp = n;
    while (temp > 0) {
        bitLength++;
        temp >>= 1;
    }
    
    if (bitLength == 1) return 1;
    
    ll highestBitValue = 1LL << (bitLength - 1);
    ll remainingBits = n - highestBitValue;
    
    ll result = 0;
    
    result += remainingBits + 1;
    
    result += (bitLength - 1) * (highestBitValue / 2);
    
    result += countOnes(remainingBits);
    
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    ll A, B;
    cin >> A >> B;
    
    ll result = countOnes(B) - countOnes(A - 1);
    
    cout << result << '\n';
    
    return 0;
}