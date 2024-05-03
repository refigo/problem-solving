#include <bits/stdc++.h>
using namespace std;
int score_info, score_math, score_science, score_english;
int minguk_score, manse_score;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> score_info >> score_math >> score_science >> score_english;
	minguk_score = score_info + score_math + score_science + score_english;
	cin >> score_info >> score_math >> score_science >> score_english;
	manse_score = score_info + score_math + score_science + score_english;
	if (minguk_score >= manse_score) cout << minguk_score;
	else cout << manse_score;
	return 0;
}