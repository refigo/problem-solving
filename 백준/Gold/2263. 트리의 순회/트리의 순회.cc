#include <bits/stdc++.h>
using namespace std;

vector<int> inorder;
vector<int> postorder;
vector<int> preorder;
unordered_map<int, int> inorder_idx; // 인오더에서 값의 인덱스를 빠르게 찾기 위한 맵

// 인오더와 포스트오더로부터 프리오더를 구하는 재귀 함수
void get_preorder(int in_start, int in_end, int post_start, int post_end) {
    // 기저 조건: 더 이상 처리할 노드가 없는 경우
    if (in_start > in_end || post_start > post_end) return;
    
    // 포스트오더의 마지막 노드는 현재 서브트리의 루트
    int root = postorder[post_end];
    
    // 프리오더는 루트를 먼저 방문
    preorder.push_back(root);
    
    // 인오더에서 루트의 위치 찾기
    int root_idx = inorder_idx[root];
    
    // 왼쪽 서브트리의 노드 개수
    int left_size = root_idx - in_start;
    
    // 왼쪽 서브트리 처리 (왼쪽 서브트리의 인오더와 포스트오더 범위를 계산)
    get_preorder(in_start, root_idx - 1, post_start, post_start + left_size - 1);
    
    // 오른쪽 서브트리 처리 (오른쪽 서브트리의 인오더와 포스트오더 범위를 계산)
    get_preorder(root_idx + 1, in_end, post_start + left_size, post_end - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    inorder.resize(n);
    postorder.resize(n);
    
    // 인오더 입력
    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
        inorder_idx[inorder[i]] = i; // 값의 인덱스를 맵에 저장
    }
    
    // 포스트오더 입력
    for (int i = 0; i < n; i++) {
        cin >> postorder[i];
    }
    
    // 프리오더 계산
    get_preorder(0, n - 1, 0, n - 1);
    
    // 프리오더 출력
    for (int i = 0; i < n; i++) {
        cout << preorder[i] << (i == n - 1 ? '\n' : ' ');
    }
    
    return 0;
}