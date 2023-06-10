#include <string>
#include <vector>

#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer(0);
    int size_ctt(citations.size());
    int counter_paper(0);

    sort(citations.begin(), citations.end());
    for (int h(1); h - 1 < size_ctt; ++h) {
        counter_paper = 0;
        for (int i(0); i < size_ctt; ++i) {
            if (citations[i] >= h) {
                ++counter_paper;
            }
        }
        if (counter_paper >= h) {
            answer = h;
        }
    }
    return answer;
}