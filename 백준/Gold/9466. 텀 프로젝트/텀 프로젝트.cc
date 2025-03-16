#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;
vector<int> student;
vector<bool> visited;
vector<bool> finished;
vector<bool> inCycle;
int n;

void findCycle(int curr) {
    visited[curr] = true;
    int next = student[curr];
    
    if(!visited[next]) {
        findCycle(next);
    }
    else if(!finished[next]) {
        int temp = next;
        while(temp != curr) {
            inCycle[temp] = true;
            temp = student[temp];
        }
        inCycle[curr] = true;
    }
    
    finished[curr] = true;
}

void solve() {
    cin >> n;
    
    student.resize(n + 1);
    visited.assign(n + 1, false);
    finished.assign(n + 1, false);
    inCycle.assign(n + 1, false);
    
    for(int i = 1; i <= n; i++) {
        cin >> student[i];
    }
    
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            findCycle(i);
        }
    }
    
    int answer = 0;
    for(int i = 1; i <= n; i++) {
        if(!inCycle[i]) answer++;
    }
    
    cout << answer << '\n';
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}