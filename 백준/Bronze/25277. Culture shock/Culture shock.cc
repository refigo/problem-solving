#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    
    int shocks = 0;
    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        if (word == "he" || word == "him" || word == "she" || word == "her") {
            shocks++;
        }
    }
    
    cout << shocks << "\n";
    
    return 0;
}
