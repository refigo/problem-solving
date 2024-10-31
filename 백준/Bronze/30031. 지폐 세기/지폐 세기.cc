#include <bits/stdc++.h>
using namespace std;
int n;
long long sum;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		int width, height;
		cin >> width >> height;
		if (height == 68) {
			if (width == 136) {
				sum += 1000;
			} else if (width == 142) {
				sum += 5000;
			} else if (width == 148) {
				sum += 10000;
			} else if (width == 154) {
				sum += 50000;
			}
		}
	}
	cout << sum;
	return 0;
}