#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Participant {
    int id;
    int score;
    int submissions;
    int lastUploadTime;
};

bool compareParticipants(const Participant& a, const Participant& b) {
    if (a.score != b.score) {
        return a.score > b.score;
    }
    
    if (a.submissions != b.submissions) {
        return a.submissions < b.submissions;
    }
    
    return a.lastUploadTime < b.lastUploadTime;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<Participant> participants(n);
    
    for (int i = 0; i < n; i++) {
        int score, submissions, lastUploadTime;
        cin >> score >> submissions >> lastUploadTime;
        
        participants[i].id = i + 1;
        participants[i].score = score;
        participants[i].submissions = submissions;
        participants[i].lastUploadTime = lastUploadTime;
    }
    
    sort(participants.begin(), participants.end(), compareParticipants);
    
    cout << participants[0].id << "\n";
    
    return 0;
}