#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int num1, num2;
    
    while (true) {
        cin >> num1 >> num2;
        
        if (num1 == 0 && num2 == 0) {
            break;
        }
        int carry_count = 0;
        int carry = 0;
        
        while (num1 > 0 || num2 > 0 || carry > 0) {
            int digit1 = num1 % 10;
            int digit2 = num2 % 10;
            
            int sum = digit1 + digit2 + carry;
            
            if (sum >= 10) {
                carry = 1;
                carry_count++;
            } else {
                carry = 0;
            }
            
            num1 /= 10;
            num2 /= 10;
        }
        
        cout << carry_count << '\n';
    }
    
    return 0;
}