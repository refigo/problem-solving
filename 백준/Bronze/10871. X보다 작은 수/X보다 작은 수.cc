#include <bits/stdc++.h>
using namespace std;
int n, x;
vector<int> vec;
int main() {
	scanf("%d %d", &n, &x);
	vec.resize(n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &vec[i]);
	for (int each : vec)
		if (each < x)
			printf("%d ", each);
	printf("\n");
	return 0;
}