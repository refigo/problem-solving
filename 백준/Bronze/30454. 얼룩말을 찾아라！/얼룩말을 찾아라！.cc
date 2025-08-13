#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countBlackStripes(const string& pattern) {
    int count = 0;
    bool inStripe = false;
    
    for (char c : pattern) {
        if (c == '1' && !inStripe) {
            inStripe = true;
            count++;
        } else if (c == '0') {
            inStripe = false;
        }
    }
    
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, l;
    cin >> n >> l;
    
    vector<string> zebras(n);
    vector<int> stripes(n);
    
    int maxStripes = 0;
    int maxStripesCount = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> zebras[i];
        stripes[i] = countBlackStripes(zebras[i]);
        
        if (stripes[i] > maxStripes) {
            maxStripes = stripes[i];
            maxStripesCount = 1;
        } else if (stripes[i] == maxStripes) {
            maxStripesCount++;
        }
    }
    
    cout << maxStripes << " " << maxStripesCount << "\n";
    
    return 0;
}