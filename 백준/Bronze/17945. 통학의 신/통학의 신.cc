#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A, B;
    cin >> A >> B;
    
    long long discriminant = 4 * ((long long)A * A - B);
    
    vector<int> roots;
    
    if (discriminant > 0) {
        int root1 = -A + sqrt(A * A - B);
        int root2 = -A - sqrt(A * A - B);
        roots.push_back(root1);
        roots.push_back(root2);
    } else if (discriminant == 0) {
        roots.push_back(-A);
    }
    
    sort(roots.begin(), roots.end());
    
    for (int root : roots) {
        cout << root << " ";
    }
    cout << "\n";
    
    return 0;
}
