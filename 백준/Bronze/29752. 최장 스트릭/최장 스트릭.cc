#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> problems(N);
    for (int i = 0; i < N; i++) {
        cin >> problems[i];
    }
    
    int current_streak = 0;
    int max_streak = 0;
    
    for (int i = 0; i < N; i++) {
        if (problems[i] > 0) {
            current_streak++;
            max_streak = max(max_streak, current_streak);
        } else {
            current_streak = 0;
        }
    }
    
    cout << max_streak << "\n";
    
    return 0;
}