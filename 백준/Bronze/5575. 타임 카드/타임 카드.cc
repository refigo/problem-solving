#include <bits/stdc++.h>
using namespace std;
int h_attend, m_attend, s_attend;
int h_leave, m_leave, s_leave;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 3; i++) {
		cin >> h_attend >> m_attend >> s_attend >> h_leave >> m_leave >> s_leave;
		int time_attend = h_attend * 3600 + m_attend * 60 + s_attend;
		int time_leave = h_leave * 3600 + m_leave * 60 + s_leave;
		int time = time_leave - time_attend;
		int h = time / 3600;
		int m = (time % 3600) / 60;
		int s = time % 60;
		cout << h << " " << m << " " << s << "\n";
	}
	return 0;
}