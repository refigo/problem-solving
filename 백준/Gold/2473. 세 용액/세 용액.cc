#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    ll min_sum = LLONG_MAX;
    vector<ll> answer(3);
    
    for(int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        
        while(left < right) {
            ll sum = arr[i] + arr[left] + arr[right];
            
            if(abs(sum) < abs(min_sum)) {
                min_sum = sum;
                answer[0] = arr[i];
                answer[1] = arr[left];
                answer[2] = arr[right];
            }
            
            if(sum > 0) {
                right--;
            }
            else if(sum < 0) {
                left++;
            }
            else {
                cout << answer[0] << " " << answer[1] << " " << answer[2] << '\n';
                return 0;
            }
        }
    }
    
    cout << answer[0] << " " << answer[1] << " " << answer[2] << '\n';
    
    return 0;
}