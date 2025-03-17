#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, k;
    cin >> n >> k;
    
    vector<pii> jewels(n);
    for(int i = 0; i < n; i++) {
        cin >> jewels[i].first >> jewels[i].second;
    }
    
    vector<int> bags(k);
    for(int i = 0; i < k; i++) {
        cin >> bags[i];
    }
    
    sort(jewels.begin(), jewels.end());
    sort(bags.begin(), bags.end());
    
    priority_queue<int> pq;
    
    ll answer = 0;
    int idx = 0;
    
    for(int i = 0; i < k; i++) {
        while(idx < n && jewels[idx].first <= bags[i]) {
            pq.push(jewels[idx].second);
            idx++;
        }
        
        if(!pq.empty()) {
            answer += pq.top();
            pq.pop();
        }
    }
    
    cout << answer << '\n';
    
    return 0;
}