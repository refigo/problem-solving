#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool isAlphabet(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int S;
    cin >> S;
    cin.ignore();
    
    for (int i = 0; i < S; i++) {
        string sentence;
        getline(cin, sentence);
        
        int consonants = 0;
        int vowels = 0;
        
        for (char c : sentence) {
            if (isAlphabet(c)) {
                if (isVowel(c)) {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        
        cout << consonants << " " << vowels << "\n";
    }
    
    return 0;
}
