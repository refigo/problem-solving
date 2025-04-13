#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    vector<int> maxDp(3), minDp(3);
    vector<int> maxTemp(3), minTemp(3);
    
    for(int j = 0; j < 3; j++) {
        int num;
        cin >> num;
        maxDp[j] = minDp[j] = num;
    }
    
    for(int i = 1; i < N; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        maxTemp[0] = a + max(maxDp[0], maxDp[1]);
        maxTemp[1] = b + max({maxDp[0], maxDp[1], maxDp[2]});
        maxTemp[2] = c + max(maxDp[1], maxDp[2]);
        
        minTemp[0] = a + min(minDp[0], minDp[1]);
        minTemp[1] = b + min({minDp[0], minDp[1], minDp[2]});
        minTemp[2] = c + min(minDp[1], minDp[2]);
        
        for(int j = 0; j < 3; j++) {
            maxDp[j] = maxTemp[j];
            minDp[j] = minTemp[j];
        }
    }
    
    int maxResult = max({maxDp[0], maxDp[1], maxDp[2]});
    int minResult = min({minDp[0], minDp[1], minDp[2]});
    
    cout << maxResult << ' ' << minResult << '\n';
    
    return 0;
}