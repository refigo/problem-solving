#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    vector<long long> tastes;
    
    tastes.push_back(A);
    tastes.push_back(B);
    tastes.push_back(C);
    
    tastes.push_back((long long)A * B);
    tastes.push_back((long long)A * C);
    tastes.push_back((long long)B * C);
    
    tastes.push_back((long long)A * B * C);
    
    vector<long long> odd_tastes;
    vector<long long> even_tastes;
    
    for (long long taste : tastes) {
        if (taste % 2 == 1) {
            odd_tastes.push_back(taste);
        } else {
            even_tastes.push_back(taste);
        }
    }
    
    if (!odd_tastes.empty()) {
        cout << *max_element(odd_tastes.begin(), odd_tastes.end()) << endl;
    } else {
        cout << *max_element(even_tastes.begin(), even_tastes.end()) << endl;
    }
    
    return 0;
}
