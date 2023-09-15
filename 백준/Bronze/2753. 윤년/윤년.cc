#include <bits/stdc++.h>
using namespace std;
int year;
int ret;
int main(){
	cin >> year;
	if (year % 4 == 0 && 
	  ((year % 100 != 0) ||  (year % 400 == 0))) {
		ret = 1;
	}
	cout << ret << '\n';
	return 0;
}