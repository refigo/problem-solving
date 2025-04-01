#include <bits/stdc++.h>
using namespace std;

int getPriority(char op) {
    if(op == '(' || op == ')') return 0;
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return -1;
}

string infixToPostfix(string &infix) {
    string result;
    stack<char> s;
    
    for(char c : infix) {
        if(isalpha(c)) {
            result += c;
            continue;
        }
        
        if(c == '(') {
            s.push(c);
        }
        else if(c == ')') {
            while(!s.empty() && s.top() != '(') {
                result += s.top();
                s.pop();
            }
            s.pop();
        }
        else {
            while(!s.empty() && getPriority(s.top()) >= getPriority(c)) {
                result += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    
    while(!s.empty()) {
        result += s.top();
        s.pop();
    }
    
    return result;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    string infix;
    cin >> infix;
    
    string postfix = infixToPostfix(infix);
    cout << postfix << '\n';
    
    return 0;
}