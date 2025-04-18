#include <bits/stdc++.h>
using namespace std;

void preorder_to_postorder(const vector<int>& preorder, int start, int end) {
    if (start > end) return;
    
    int root = preorder[start];
    
    int right_start = end + 1;
    for (int i = start + 1; i <= end; i++) {
        if (preorder[i] > root) {
            right_start = i;
            break;
        }
    }
    
    preorder_to_postorder(preorder, start + 1, right_start - 1);
    
    preorder_to_postorder(preorder, right_start, end);
    
    cout << root << '\n';
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    vector<int> preorder;
    int value;
    
    while (cin >> value) {
        preorder.push_back(value);
    }
    
    preorder_to_postorder(preorder, 0, preorder.size() - 1);
    
    return 0;
}