#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> numbers;
vector<int> sequence;
vector<bool> used;

void backtrack(int count) {
    if (count == m) {
        for (int i = 0; i < m; i++) {
            cout << sequence[i] << " ";
        }
        cout << '\n';
        return;
    }
    
    int prev = -1;
    for (int i = 0; i < n; i++) {
        if (used[i] || prev == numbers[i]) continue;
        
        sequence[count] = numbers[i];
        used[i] = true;
        prev = numbers[i];
        backtrack(count + 1);
        used[i] = false;
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n >> m;
    
    numbers.resize(n);
    sequence.resize(m);
    used.resize(n, false);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    sort(numbers.begin(), numbers.end());
    
    backtrack(0);
    
    return 0;
}