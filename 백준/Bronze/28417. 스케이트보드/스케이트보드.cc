#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int max_score = 0;
    
    for (int i = 0; i < n; ++i) {
        vector<int> scores(7);
        for (int j = 0; j < 7; ++j) {
            cin >> scores[j];
        }
        
        int max_run = max(scores[0], scores[1]);
        
        vector<int> trick_scores(scores.begin() + 2, scores.end());
        sort(trick_scores.rbegin(), trick_scores.rend());
        
        int final_score = max_run + trick_scores[0] + trick_scores[1];
        
        max_score = max(max_score, final_score);
    }
    
    cout << max_score << "\n";
    
    return 0;
}