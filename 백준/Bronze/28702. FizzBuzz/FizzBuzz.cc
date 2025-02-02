#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

string getFizzBuzz(int n) {
    if (n % 3 == 0 && n % 5 == 0) return "FizzBuzz";
    if (n % 3 == 0) return "Fizz";
    if (n % 5 == 0) return "Buzz";
    return to_string(n);
}

bool isNumber(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) return false;
    }
    return !str.empty();
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
    string s[3];
    cin >> s[0] >> s[1] >> s[2];
    
    int numIdx = -1;
    int numValue = -1;
    for (int i = 0; i < 3; i++) {
        if (isNumber(s[i])) {
            numIdx = i;
            numValue = stoi(s[i]);
            break;
        }
    }
    int start = numValue - numIdx;
	cout << getFizzBuzz(start + 3) << '\n';
    return 0;
}