#include <bits/stdc++.h>
using namespace std;

string s, to_explore;
string stk;

void explore_is_in() {
	bool is_in = true;
	stack<char> tmp_stk;
	// 뒤에서 부터 차례대로 검증하기
		// 검증과정에서 해당 문자열을 stack에서 모조리 뽑아내게 됨
	for (int i = to_explore.size() - 1; i >= 0; i--) {
		if (to_explore[i] == stk.back()) {
			tmp_stk.push(stk.back());
			stk.pop_back();
		} else {
			is_in = false;
			break ;
		}
	}
	if (is_in == false) {
		int tmp_size = tmp_stk.size();
		for (int i = 0; i < tmp_size; i++) {
			stk.push_back(tmp_stk.top());
			tmp_stk.pop();
		}
	}
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> s >> to_explore;
	// loop - s 문자열 순회
	for (int i = 0; i < s.size(); i++) {
		// stack 자료구조에 문자를 하나씩 넣음
		stk.push_back(s[i]);
		// stack의 크기(길이)가 to_explore가 이상일 경우에
		if (stk.size() >= to_explore.size()) {
			// stack의 마지막 문자열들이 폭발 문자열과 같은지 검증
			explore_is_in();
		}
	}
	// print
	if (stk.size()) {
		cout << stk;
	} else {
		cout << "FRULA";
	}
	cout << endl;
	return 0;
}