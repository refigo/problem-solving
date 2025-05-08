#include <bits/stdc++.h>
using namespace std;

struct Shark {
    int r, c;
    int s;
    int d;
    int z;
    
    Shark(int _r, int _c, int _s, int _d, int _z) {
        r = _r; c = _c; s = _s; d = _d; z = _z;
    }
    
    void move(int R, int C) {
        if (d == 1 || d == 2) {
            int cycle = 2 * (R - 1);
            if (cycle > 0) {
                s %= cycle;
            }
        } else {
            int cycle = 2 * (C - 1);
            if (cycle > 0) {
                s %= cycle;
            }
        }
        
        for (int i = 0; i < s; i++) {
            if (d == 1) {
                r--;
                if (r == 0) {
                    r = 2;
                    d = 2;
                }
            } else if (d == 2) {
                r++;
                if (r == R + 1) {
                    r = R - 1;
                    d = 1;
                }
            } else if (d == 3) {
                c++;
                if (c == C + 1) {
                    c = C - 1;
                    d = 4;
                }
            } else if (d == 4) {
                c--;
                if (c == 0) {
                    c = 2;
                    d = 3;
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
    
    vector<Shark> sharks;
    for (int i = 0; i < M; i++) {
        int r, c, s, d, z;
        cin >> r >> c >> s >> d >> z;
        sharks.push_back(Shark(r, c, s, d, z));
    }
    
    int result = 0;
    
    for (int king_pos = 1; king_pos <= C; king_pos++) {
        int caught_idx = -1;
        int min_row = R + 1;
        
        for (int i = 0; i < sharks.size(); i++) {
            if (sharks[i].c == king_pos && sharks[i].r < min_row) {
                min_row = sharks[i].r;
                caught_idx = i;
            }
        }
        
        if (caught_idx != -1) {
            result += sharks[caught_idx].z;
            sharks.erase(sharks.begin() + caught_idx);
        }
        
        if (sharks.empty()) continue;
        
        for (auto& shark : sharks) {
            shark.move(R, C);
        }
        
        map<pair<int, int>, vector<int>> pos_to_sharks;
        
        for (int i = 0; i < sharks.size(); i++) {
            pos_to_sharks[{sharks[i].r, sharks[i].c}].push_back(i);
        }
        
        vector<bool> removed(sharks.size(), false);
        
        for (auto& [pos, idxs] : pos_to_sharks) {
            if (idxs.size() <= 1) continue;
            
            int max_size = 0;
            int max_idx_pos = 0;
            
            for (int i = 0; i < idxs.size(); i++) {
                if (sharks[idxs[i]].z > max_size) {
                    max_size = sharks[idxs[i]].z;
                    max_idx_pos = i;
                }
            }
            
            for (int i = 0; i < idxs.size(); i++) {
                if (i != max_idx_pos) {
                    removed[idxs[i]] = true;
                }
            }
        }
        
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