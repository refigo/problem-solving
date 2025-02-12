#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> solutions;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n;
    solutions.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> solutions[i];
    }
    
    sort(solutions.begin(), solutions.end());
    
    int left = 0;
    int right = n - 1;
    
    int min_sum = INT_MAX;
    int result_left = 0;
    int result_right = 0;
    
    while (left < right) {
        int sum = solutions[left] + solutions[right];
        
        if (abs(sum) < abs(min_sum)) {
            min_sum = sum;
            result_left = solutions[left];
            result_right = solutions[right];
        }
        
        if (sum < 0) {
            left++;
        }
        else if (sum > 0) {
            right--;
        }
        else {
            break;
        }
    }
    
    cout << result_left << " " << result_right << '\n';
    
    return 0;
}