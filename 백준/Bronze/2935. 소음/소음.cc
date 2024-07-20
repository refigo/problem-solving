#include <bits/stdc++.h>
using namespace std;
string a, b;
char oper;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> oper >> b;
	if (oper == '+') {
		if (a.size() == b.size()) {
			cout << "2";
			for (int i = 1; i < a.size(); i++) cout << "0";
		}
		else if (a.size() > b.size()) {
			cout << "1";
			for (int i = 1; i < a.size() - b.size(); i++) cout << "0";
			cout << "1";
			for (int i = 1; i < b.size(); i++) cout << "0";
		}
		else {
			cout << "1";
			for (int i = 1; i < b.size() - a.size(); i++) cout << "0";
			cout << "1";
			for (int i = 1; i < a.size(); i++) cout << "0";
		}
	}
	else {
		cout << "1";
		for (int i = 1; i < a.size() + b.size() - 1; i++) cout << "0";
	}
	return 0;
}