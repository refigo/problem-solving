#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<int> max_scores = {100, 100, 200, 200, 300, 300, 400, 400, 500};
    
    vector<int> scores(9);
    int total_score = 0;
    bool is_hacker = false;
    
    for (int i = 0; i < 9; i++) {
        cin >> scores[i];
        total_score += scores[i];
        
        if (scores[i] > max_scores[i]) {
            is_hacker = true;
        }
    }
    
    if (is_hacker) {
        cout << "hacker" << '\n';
    } else if (total_score >= 100) {
        cout << "draw" << '\n';
    } else {
        cout << "none" << '\n';
    }
    
    return 0;
}