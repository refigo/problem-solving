#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N, M;
    cin >> N >> M;
    
    set<int> truth_people;
    
    int truth_count;
    cin >> truth_count;
    
    for(int i = 0; i < truth_count; i++) {
        int person;
        cin >> person;
        truth_people.insert(person);
    }
    
    vector<vector<int>> parties(M);
    
    vector<vector<int>> person_to_parties(N + 1);
    
    for(int i = 0; i < M; i++) {
        int party_size;
        cin >> party_size;
        
        for(int j = 0; j < party_size; j++) {
            int person;
            cin >> person;
            parties[i].push_back(person);
            person_to_parties[person].push_back(i);
        }
    }
    
    queue<int> q;
    vector<bool> visited_person(N + 1, false);
    vector<bool> visited_party(M, false);
    
    for(int person : truth_people) {
        q.push(person);
        visited_person[person] = true;
    }
    
    while(!q.empty()) {
        int current_person = q.front();
        q.pop();
        
        for(int party_idx : person_to_parties[current_person]) {
            if(visited_party[party_idx]) continue;
            
            visited_party[party_idx] = true;
            
            for(int person : parties[party_idx]) {
                if(!visited_person[person]) {
                    visited_person[person] = true;
                    q.push(person);
                }
            }
        }
    }
    
    int answer = 0;
    for(int i = 0; i < M; i++) {
        if(!visited_party[i]) {
            answer++;
        }
    }
    
    cout << answer << '\n';
    
    return 0;
}