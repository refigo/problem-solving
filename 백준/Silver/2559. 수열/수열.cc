#include <bits/stdc++.h>
using namespace std;
int n, k;
int tmp;
int sum;
vector<int> sums;
int main(){
	cin >> n >> k;
	for (int i = 0; i < n; ++i){
		cin >> tmp;
		sum += tmp;
		sums.push_back(sum);
	}
	int max_to_print = sums[k-1];
	for (int i = k; i < n; ++i){
		tmp = sums[i] - sums[i - k];
		if (max_to_print < tmp) {
			max_to_print = tmp;
		}
	}
	cout << max_to_print << '\n';
	return 0;
}