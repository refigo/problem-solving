#include <bits/stdc++.h>
using namespace std;
int y_human, m_human, d_human;
int y_earth, m_earth, d_earth;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> y_human >> m_human >> d_human;
	cin >> y_earth >> m_earth >> d_earth;
	// man
	int age_man = y_earth - y_human;
	if (m_earth < m_human) age_man--;
	else if (m_earth == m_human && d_earth < d_human) age_man--;
	cout << age_man << '\n';

	// age
	int age_count = y_earth - y_human + 1;
	cout << age_count << '\n';

	// yeon
	int age_yeon = y_earth - y_human;
	cout << age_yeon << '\n';
	
	return 0;
}