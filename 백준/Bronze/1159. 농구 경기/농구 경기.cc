#include "bits/stdc++.h"
using namespace std;
int num;
list<string> lst;
string tmp;
char fc;
int cnt;
vector<char> ans;
int main(){
    cin >> num;
    for (int i = 0; i < num; ++i){
        cin >> tmp;
        lst.push_back(tmp);
    }
    lst.sort();
    while (lst.size() != 0){
        fc = *((*lst.begin()).begin());
        cnt = 1;
        lst.pop_front();
        while (lst.begin() != lst.end() && *((*lst.begin()).begin()) == fc) {
            ++cnt;
            lst.pop_front();
        }
        if (cnt >= 5)
            ans.push_back(fc);
    }
    if (ans.size() == 0) {
        cout << "PREDAJA" << '\n';
    } else {
        for (auto a : ans) {
            cout << a;
        }
        cout << '\n';
    }
    return 0;
}