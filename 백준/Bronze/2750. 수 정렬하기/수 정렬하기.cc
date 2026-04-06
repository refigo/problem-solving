#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 입력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    // 오름차순 정렬
    sort(nums.begin(), nums.end());

    // 결과 출력
    for (int i = 0; i < N; ++i) {
        cout << nums[i] << "\n";
    }

    return 0;
}
