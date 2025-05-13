#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    
    vector<int> answers(10);
    for (int j = 1; j <= 10; j++) {
        answers[j-1] = ((j-1) % 5) + 1;
    }
    
    vector<int> retake_students;
    
    for (int i = 1; i <= N; i++) {
        bool perfect_score = true;
        
        for (int j = 0; j < 10; j++) {
            int student_answer;
            cin >> student_answer;
            
            if (student_answer != answers[j]) {
                perfect_score = false;
            }
        }
        
        if (perfect_score) {
            retake_students.push_back(i);
        }
    }
    
    for (int student : retake_students) {
        cout << student << '\n';
    }
    
    return 0;
}
