#include <bits/stdc++.h>
using namespace std;
string jinho_mbti;
int n;
string friend_mbti;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> jinho_mbti;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> friend_mbti;
		if (jinho_mbti == friend_mbti) {
			ret++;
		}
	}
	cout << ret;
	return 0;
}