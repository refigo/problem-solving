#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> meetings(n);
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        meetings[i] = {end, start};
    }
    
    sort(meetings.begin(), meetings.end());
    
    int count = 0;
    int last_end = 0;
    
    for (const auto& meeting : meetings) {
        int start = meeting.second;
        int end = meeting.first;
        
        if (start >= last_end) {
            count++;
            last_end = end;
        }
    }
    
    cout << count << '\n';
    
    return 0;
}