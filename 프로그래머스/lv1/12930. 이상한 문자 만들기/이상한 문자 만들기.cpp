#include <string>
#include <vector>

#include <cctype>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer("");
    int len_of_s(s.length());
    int i(-1);
    int idx_of_word(-1);

    while (++i < len_of_s) {
        if (isspace(s[i])) {
            answer.push_back(s[i]);
            continue ;
        }
        idx_of_word = -1;
        while (i + ++idx_of_word < len_of_s) {
            if (isspace(s[i + idx_of_word])) {
                break ;
            } else if (idx_of_word % 2 == 0) {
                answer.push_back(toupper(s[i + idx_of_word]));
            } else {
                answer.push_back(tolower(s[i + idx_of_word]));
            }
        }
        i = i + idx_of_word - 1;
    }
    return answer;
}