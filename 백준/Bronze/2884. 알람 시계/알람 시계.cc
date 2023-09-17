#include <bits/stdc++.h>
using namespace std;
int h, m;
int main(){
	cin >> h >> m;
	m -= 45;
	if (m < 0) {
		if (--h < 0)
			h = 24 + h;
		m = 60 + m;
	}
	cout << h << ' ' << m << '\n';
	return 0;
}