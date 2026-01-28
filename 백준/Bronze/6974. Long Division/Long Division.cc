#include <bits/stdc++.h>
using namespace std;

string subtract(string a, string b) {
    string result = "";
    int borrow = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    
    while (i >= 0) {
        int digit_a = a[i] - '0';
        int digit_b = (j >= 0) ? (b[j] - '0') : 0;
        
        int diff = digit_a - digit_b - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        
        result = char('0' + diff) + result;
        i--;
        j--;
    }
    
    while (result.size() > 1 && result[0] == '0') {
        result = result.substr(1);
    }
    
    return result;
}

bool isGreaterOrEqual(string a, string b) {
    if (a.size() > b.size()) return true;
    if (a.size() < b.size()) return false;
    return a >= b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for (int tc = 0; tc < n; ++tc) {
        if (tc > 0) cout << '\n';
        
        string dividend, divisor;
        cin >> dividend >> divisor;
        
        string quotient = "";
        string remainder = "";
        
        for (int i = 0; i < dividend.size(); ++i) {
            remainder += dividend[i];
            
            while (remainder.size() > 1 && remainder[0] == '0') {
                remainder = remainder.substr(1);
            }
            
            int count = 0;
            while (isGreaterOrEqual(remainder, divisor)) {
                remainder = subtract(remainder, divisor);
                count++;
            }
            
            quotient += char('0' + count);
        }
        
        while (quotient.size() > 1 && quotient[0] == '0') {
            quotient = quotient.substr(1);
        }
        
        cout << quotient << '\n';
        cout << remainder << '\n';
    }
    
    return 0;
}