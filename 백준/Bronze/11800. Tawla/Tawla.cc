#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string getDiceNames(int a, int b) {
    vector<string> names = {"Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
    vector<string> doubleNames = {"Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};
    
    if (a == b) {
        return doubleNames[a-1];
    } else {
        int larger = max(a, b);
        int smaller = min(a, b);
        
        if (larger == 6 && smaller == 5) {
            return "Sheesh Beesh";
        } else {
            return names[larger-1] + " " + names[smaller-1];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int testCase = 1; testCase <= t; testCase++) {
        int a, b;
        cin >> a >> b;
        
        cout << "Case " << testCase << ": " << getDiceNames(a, b) << "\n";
    }
    
    return 0;
}