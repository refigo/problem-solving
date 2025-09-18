#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    vector<int> cost(N);
    vector<string> dest(N);
    int jinjuCost = -1;
    for (int i = 0; i < N; i++) {
        cin >> dest[i] >> cost[i];
        if (dest[i] == "jinju") jinjuCost = cost[i];
    }
    int cnt = 0;
    for (int i = 0; i < N; i++) if (cost[i] > jinjuCost) cnt++;
    cout << jinjuCost << '\n' << cnt << '\n';
    return 0;
}