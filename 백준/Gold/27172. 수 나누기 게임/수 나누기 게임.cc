#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    const int MAX_CARD = 1000001;
    vector<int> cards;
    vector<int> scores;
    vector<int> card_owners(MAX_CARD, -1);
    
    // 카드 입력 및 유효한 카드 값에 대한 소유자 기록
    cards.resize(n);
    scores.resize(n, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
        card_owners[cards[i]] = i;
    }
    
    // 카드 값마다 승리 여부를 기록하기 위한 배열
    // 에라토스테네스의 체와 유사한 방식으로 배수를 한 번에 처리
    for (int i = 1; i < MAX_CARD; i++) {
        if (card_owners[i] == -1) continue; // 해당 카드 값을 가진 플레이어가 없으면 스킵
        
        int owner = card_owners[i];
        
        // i의 배수 처리 (i가 j의 약수인 경우, i의 소유자가 j의 소유자를 이김)
        for (int j = i * 2; j < MAX_CARD; j += i) {
            if (card_owners[j] != -1) {
                scores[owner]++; // i 카드 소유자는 j 카드 소유자를 이김
                scores[card_owners[j]]--; // j 카드 소유자는 패배
            }
        }
    }
    
    // 최종 점수 출력
    for (int i = 0; i < n; i++) {
        cout << scores[i] << (i == n - 1 ? '\n' : ' ');
    }
    
    return 0;
}