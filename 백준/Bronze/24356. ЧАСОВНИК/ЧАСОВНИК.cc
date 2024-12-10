#include <bits/stdc++.h>
using namespace std;
int t1, t2, m1, m2;
int m_sum1, m_sum2;
int diff, rap;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	cin >> t1 >> m1 >> t2 >> m2;
	m_sum1 = 60 * t1 + m1;
	m_sum2 = 60 * t2 + m2;
	if (m_sum1 > m_sum2) {
		diff = 24 * 60 - m_sum1 + m_sum2;
	} else {
		diff = m_sum2 - m_sum1;
	}
	rap = diff / 30;
	cout << diff << " " << rap;
	return 0;
}