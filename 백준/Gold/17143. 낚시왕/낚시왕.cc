#include <bits/stdc++.h>
using namespace std;

// 상어 정보를 담는 구조체
struct Shark {
    int r, c;      // 위치 (행, 열)
    int s;         // 속력
    int d;         // 이동 방향 (1: 위, 2: 아래, 3: 오른쪽, 4: 왼쪽)
    int z;         // 크기
    
    Shark(int _r, int _c, int _s, int _d, int _z) {
        r = _r; c = _c; s = _s; d = _d; z = _z;
    }
    
    // 상어 이동 함수
    void move(int R, int C) {
        // 방향에 따른 속도 최적화 (주기 계산)
        if (d == 1 || d == 2) {  // 위/아래 방향
            int cycle = 2 * (R - 1);  // 위->아래->위 한 주기
            if (cycle > 0) {  // 행이 1보다 큰 경우에만 주기 계산
                s %= cycle;
            }
        } else {  // 왼쪽/오른쪽 방향
            int cycle = 2 * (C - 1);  // 왼->오른->왼 한 주기
            if (cycle > 0) {  // 열이 1보다 큰 경우에만 주기 계산
                s %= cycle;
            }
        }
        
        // 이동 시뮬레이션
        for (int i = 0; i < s; i++) {
            if (d == 1) {  // 위
                r--;
                if (r == 0) {  // 경계에 도달하면 방향 변경
                    r = 2;
                    d = 2;  // 아래로 방향 전환
                }
            } else if (d == 2) {  // 아래
                r++;
                if (r == R + 1) {  // 경계에 도달하면 방향 변경
                    r = R - 1;
                    d = 1;  // 위로 방향 전환
                }
            } else if (d == 3) {  // 오른쪽
                c++;
                if (c == C + 1) {  // 경계에 도달하면 방향 변경
                    c = C - 1;
                    d = 4;  // 왼쪽으로 방향 전환
                }
            } else if (d == 4) {  // 왼쪽
                c--;
                if (c == 0) {  // 경계에 도달하면 방향 변경
                    c = 2;
                    d = 3;  // 오른쪽으로 방향 전환
                }
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int R, C, M;
    cin >> R >> C >> M;
    
    // 상어 정보 저장
    vector<Shark> sharks;
    for (int i = 0; i < M; i++) {
        int r, c, s, d, z;
        cin >> r >> c >> s >> d >> z;
        sharks.push_back(Shark(r, c, s, d, z));
    }
    
    int result = 0;  // 낚시왕이 잡은 상어 크기의 합
    
    // 낚시왕 이동 시뮬레이션 (1열부터 C열까지)
    for (int king_pos = 1; king_pos <= C; king_pos++) {
        // 1. 낚시왕이 있는 열에서 가장 가까운 상어 잡기
        int caught_idx = -1;
        int min_row = R + 1;
        
        for (int i = 0; i < sharks.size(); i++) {
            if (sharks[i].c == king_pos && sharks[i].r < min_row) {
                min_row = sharks[i].r;
                caught_idx = i;
            }
        }
        
        // 상어를 잡았으면 크기를 더하고 제거
        if (caught_idx != -1) {
            result += sharks[caught_idx].z;
            sharks.erase(sharks.begin() + caught_idx);
        }
        
        // 상어가 없으면 다음으로 진행
        if (sharks.empty()) continue;
        
        // 2. 상어 이동
        for (auto& shark : sharks) {
            shark.move(R, C);
        }
        
        // 3. 상어가 겹치는 경우 처리
        map<pair<int, int>, vector<int>> pos_to_sharks;  // 위치 -> 상어 인덱스
        
        for (int i = 0; i < sharks.size(); i++) {
            pos_to_sharks[{sharks[i].r, sharks[i].c}].push_back(i);
        }
        
        // 겹치는 상어들 중 가장 큰 상어만 남김
        vector<bool> removed(sharks.size(), false);
        
        for (auto& [pos, idxs] : pos_to_sharks) {
            if (idxs.size() <= 1) continue;  // 상어가 1마리 이하면 무시
            
            // 가장 큰 상어 찾기
            int max_size = 0;
            int max_idx_pos = 0;
            
            for (int i = 0; i < idxs.size(); i++) {
                if (sharks[idxs[i]].z > max_size) {
                    max_size = sharks[idxs[i]].z;
                    max_idx_pos = i;
                }
            }
            
            // 가장 큰 상어 외에는 모두 제거 표시
            for (int i = 0; i < idxs.size(); i++) {
                if (i != max_idx_pos) {
                    removed[idxs[i]] = true;
                }
            }
        }
        
        // 제거된 상어 삭제 (뒤에서부터 삭제해야 인덱스가 유효함)
        vector<Shark> next_sharks;
        for (int i = 0; i < sharks.size(); i++) {
            if (!removed[i]) {
                next_sharks.push_back(sharks[i]);
            }
        }
        
        sharks = next_sharks;
    }
    
    cout << result << '\n';
    
    return 0;
}