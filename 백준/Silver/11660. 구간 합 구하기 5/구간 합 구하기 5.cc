#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1025;
int arr[MAX_N][MAX_N];
int prefix[MAX_N][MAX_N];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n, m;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            prefix[i][j] = arr[i][j] + 
                          prefix[i-1][j] + 
                          prefix[i][j-1] - 
                          prefix[i-1][j-1];
        }
    }
    
    while(m--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        int result = prefix[x2][y2] - 
                    prefix[x1-1][y2] - 
                    prefix[x2][y1-1] + 
                    prefix[x1-1][y1-1];
        
        cout << result << '\n';
    }
    
    return 0;
}