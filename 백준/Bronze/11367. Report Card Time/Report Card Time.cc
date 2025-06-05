#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getGrade(int score) {
    if (score >= 97 && score <= 100) return "A+";
    else if (score >= 90 && score <= 96) return "A";
    else if (score >= 87 && score <= 89) return "B+";
    else if (score >= 80 && score <= 86) return "B";
    else if (score >= 77 && score <= 79) return "C+";
    else if (score >= 70 && score <= 76) return "C";
    else if (score >= 67 && score <= 69) return "D+";
    else if (score >= 60 && score <= 66) return "D";
    else return "F"; // 0-59
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<pair<string, int>> hobbits(n);
    
    for (int i = 0; i < n; i++) {
        cin >> hobbits[i].first >> hobbits[i].second;
    }
    
    for (int i = 0; i < n; i++) {
        string name = hobbits[i].first;
        int score = hobbits[i].second;
        string grade = getGrade(score);
        
        cout << name << " " << grade << "\n";
    }
    
    return 0;
}