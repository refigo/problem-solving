#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    vector<int> fruits(N);
    for(int i = 0; i < N; i++) {
        cin >> fruits[i];
    }
    
    int answer = 0;
    vector<int> count(10, 0);
    int types = 0;
    int left = 0;
    
    for(int right = 0; right < N; right++) {
        if(count[fruits[right]] == 0) {
            types++;
        }
        count[fruits[right]]++;
        
        while(types > 2) {
            count[fruits[left]]--;
            if(count[fruits[left]] == 0) {
                types--;
            }
            left++;
        }
        
        answer = max(answer, right - left + 1);
    }
    
    cout << answer << '\n';
    
    return 0;
}