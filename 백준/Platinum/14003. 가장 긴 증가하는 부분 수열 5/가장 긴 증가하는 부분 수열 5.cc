#include <bits/stdc++.h>
using namespace std;

/*
* 가장 긴 증가하는 부분 수열(LIS) 문제 해결
* O(n log n) 알고리즘 사용
*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // LIS를 위한 변수들
    vector<int> lis; // LIS 값들을 저장하는 벡터
    vector<int> indices(n); // 각 원소가 LIS의 어느 위치에 들어가는지 저장
    vector<int> prev(n, -1); // 각 원소 이전에 오는 원소의 인덱스
    
    for (int i = 0; i < n; i++) {
        // lower_bound: arr[i] 이상인 값 중 가장 작은 값의 위치 찾기
        auto it = lower_bound(lis.begin(), lis.end(), arr[i]);
        
        if (it == lis.end()) { // LIS의 끝에 추가
            if (!lis.empty()) {
                prev[i] = indices[lis.size() - 1]; // 이전 원소 저장
            }
            indices[lis.size()] = i;
            lis.push_back(arr[i]);
        } else { // 기존 값 교체
            int pos = it - lis.begin();
            lis[pos] = arr[i];
            indices[pos] = i;
            if (pos > 0) {
                prev[i] = indices[pos - 1]; // 이전 원소 저장
            }
        }
    }
    
    // LIS의 길이 출력
    cout << lis.size() << '\n';
    
    // LIS 경로 추적 및 출력
    vector<int> path;
    int cur = indices[lis.size() - 1]; // 마지막 원소부터 시작
    
    // 역방향 탐색으로 경로 구성
    while (cur != -1) {
        path.push_back(arr[cur]);
        cur = prev[cur];
    }
    
    // 경로 뒤집기 (오름차순 정렬로 출력하기 위해)
    reverse(path.begin(), path.end());
    
    // LIS 출력
    for (int x : path) {
        cout << x << ' ';
    }
    cout << '\n';
    
    return 0;
}