#include <bits/stdc++.h>
using namespace std;
int n;
int a[104];
long long ret;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%1d", &(a[i]));
		ret += a[i];
	}
	printf("%lld\n", ret);
	return 0;
}