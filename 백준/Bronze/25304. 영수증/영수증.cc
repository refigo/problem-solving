#include <bits/stdc++.h>
using namespace std;
int total_cost, total_num;
int each_cost, each_num;
int ans;
int main() {
	cin >> total_cost >> total_num;
	for (int i = 0; i < total_num; ++i) {
		cin >> each_cost >> each_num;
		ans += each_cost * each_num;
	}
	if (total_cost == ans)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
	return 0;
}