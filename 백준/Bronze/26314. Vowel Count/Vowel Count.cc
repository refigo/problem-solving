#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    
    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        
        int vowels = 0;
        int consonants = 0;
        
        for (char c : name) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        
        cout << name << "\n" << (vowels > consonants ? 1 : 0) << "\n";
    }

    return 0;
}
