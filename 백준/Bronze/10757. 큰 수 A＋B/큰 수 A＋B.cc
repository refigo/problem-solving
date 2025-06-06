#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string addBigNumbers(string num1, string num2) {
    if (num1.length() < num2.length())
        swap(num1, num2);
    
    string result = "";
    int carry = 0;
    
    int diff = num1.length() - num2.length();
    
    for (int i = num2.length() - 1; i >= 0; i--) {
        int sum = ((num1[i + diff] - '0') + (num2[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    
    for (int i = diff - 1; i >= 0; i--) {
        int sum = ((num1[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    
    if (carry)
        result.push_back(carry + '0');
    
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string A, B;
    cin >> A >> B;
    
    string result = addBigNumbers(A, B);
    cout << result << '\n';
    
    return 0;
}