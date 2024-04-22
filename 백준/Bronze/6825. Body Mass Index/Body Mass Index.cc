#include <bits/stdc++.h>
using namespace std;
float weight, height, bmi;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> weight >> height;
	bmi = weight / (height * height);
	if (bmi < 18.5) cout << "Underweight";
	else if (bmi <= 25) cout << "Normal weight";
	else cout << "Overweight";
	return 0;
}