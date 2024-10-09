#include <bits/stdc++.h>
using namespace std;
float diameter, time_seconds;
int rotation;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 1; ; i++) {
		cin >> diameter >> rotation >> time_seconds;
		if (rotation == 0) break;
		float distance = 3.14159265358979323846 * diameter * rotation / 63360;
		float mph = distance / time_seconds * 3600;
		cout << "Trip #" << i << ": " << fixed << setprecision(2) << distance << " " << mph << '\n';
	}
	return 0;
}