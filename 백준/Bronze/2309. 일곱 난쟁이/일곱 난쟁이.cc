#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int each;
int sum = 0;

void print_ans(int i, int j){
	for (int idx = 0; idx < 9; ++idx){
		if (idx != i && idx != j) {
			cout << a[idx] << '\n';
		}
	}
}

int main(){
    for (int i = 0; i < 9; ++i){
		cin >> each;
		sum += each;
		a.push_back(each);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < 9; ++i) {
        for (int j = i; j < 9; ++j) {
            if (sum - a[i] - a[j] == 100) {
				print_ans(i, j);
				return 0;
			}
        }
    }
    return 1;
}
