#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    
    vector<int> towers(N);
    for (int i = 0; i < N; i++) {
        cin >> towers[i];
    }
    
    int pushes = 0;
    int i = 0;
    
    while (i < N) {
        pushes++;
        
        int current_height = towers[i];
        i++;
        
        while (i < N && current_height > towers[i]) {
            current_height = towers[i];
            i++;
        }
    }
    
    cout << pushes << '\n';
    
    return 0;
}