#include <bits/stdc++.h>
using namespace std;

vector<int> inorder;
vector<int> postorder;
vector<int> preorder;
unordered_map<int, int> inorder_idx;

void get_preorder(int in_start, int in_end, int post_start, int post_end) {
    if (in_start > in_end || post_start > post_end) return;
    
    int root = postorder[post_end];
    
    preorder.push_back(root);
    
    int root_idx = inorder_idx[root];
    
    int left_size = root_idx - in_start;
    
    get_preorder(in_start, root_idx - 1, post_start, post_start + left_size - 1);
    
    get_preorder(root_idx + 1, in_end, post_start + left_size, post_end - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    inorder.resize(n);
    postorder.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
        inorder_idx[inorder[i]] = i;
    }
    
    for (int i = 0; i < n; i++) {
        cin >> postorder[i];
    }
    
    get_preorder(0, n - 1, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << preorder[i] << (i == n - 1 ? '\n' : ' ');
    }
    
    return 0;
}