#include <string>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer(true);
    int len_of_s(s.length());
    
    if (len_of_s != 4 && 6 != len_of_s) {
        answer = false;
    }
    for (int i = 0; i < len_of_s; ++i) {
        if (answer == false)
            break ;
        if (isdigit(s[i]) == false) {
            answer = false;
        }
    }
    return answer;
}