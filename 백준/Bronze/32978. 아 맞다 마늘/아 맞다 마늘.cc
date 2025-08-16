#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    unordered_set<string> ingredients;
    string ingredient;
    
    for (int i = 0; i < n; i++) {
        cin >> ingredient;
        ingredients.insert(ingredient);
    }
    
    for (int i = 0; i < n - 1; i++) {
        cin >> ingredient;
        ingredients.erase(ingredient);
    }
    
    cout << *ingredients.begin() << "\n";
    
    return 0;
}