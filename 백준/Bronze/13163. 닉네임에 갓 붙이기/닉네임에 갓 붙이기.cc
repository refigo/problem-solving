#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    for (int i = 0; i < N; i++) {
        string nickname;
        getline(cin, nickname);
        
        istringstream iss(nickname);
        string syllable;
        bool isFirst = true;
        string result = "";
        
        while (iss >> syllable) {
            if (isFirst) {
                result = "god";
                isFirst = false;
            } else {
                result += syllable;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}
