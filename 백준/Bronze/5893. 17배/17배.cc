#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string multiplyBy17(const string& binary) {
    string shifted = binary + "0000";
    
    string result;
    int carry = 0;
    int maxLength = max(shifted.length(), binary.length());
    
    string paddedBinary = string(maxLength - binary.length(), '0') + binary;
    string paddedShifted = string(maxLength - shifted.length(), '0') + shifted;
    
    for (int i = maxLength - 1; i >= 0; i--) {
        int bit1 = (i < paddedBinary.length()) ? paddedBinary[i] - '0' : 0;
        int bit2 = (i < paddedShifted.length()) ? paddedShifted[i] - '0' : 0;
        
        int sum = bit1 + bit2 + carry;
        carry = sum / 2;
        result.push_back((sum % 2) + '0');
    }
    
    if (carry > 0) {
        result.push_back('1');
    }
    
    reverse(result.begin(), result.end());
    
    result.erase(0, result.find_first_not_of('0'));
    
    if (result.empty()) {
        return "0";
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string binary;
    cin >> binary;
    
    string result = multiplyBy17(binary);
    cout << result << '\n';
    
    return 0;
}