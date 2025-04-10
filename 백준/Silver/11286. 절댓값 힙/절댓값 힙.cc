#include <bits/stdc++.h>
using namespace std;

struct compare {
    bool operator()(int a, int b) {
        if(abs(a) == abs(b)) {
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    priority_queue<int, vector<int>, compare> pq;
    
    while(N--) {
        int x;
        cin >> x;
        
        if(x == 0) {
            if(pq.empty()) {
                cout << "0\n";
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        } else {
            pq.push(x);
        }
    }
    
    return 0;
}