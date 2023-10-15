#include <bits/stdc++.h>
using namespace std;
int  num;
set<int> s;
int main() {
	while (scanf("%d\n", &num) != EOF) {
		s.insert(num % 42);
	}
	cout << s.size() << '\n';
	return 0;
}