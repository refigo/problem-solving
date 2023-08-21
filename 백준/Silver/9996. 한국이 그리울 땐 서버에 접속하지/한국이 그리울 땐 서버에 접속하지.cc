#include <bits/stdc++.h>
using namespace std;
int num;
string pattern;
vector<string> words;
string input_word;
int dot_pos;
string prefix, postfix;
int pref_size, post_size;
int pref_comp, post_comp;
int main() {
	cin >> num;
	cin >> pattern;
	for (int i = 0; i < num; ++i){
		cin >> input_word;
		words.push_back(input_word);
	}
	dot_pos = pattern.find('*');
	prefix = pattern.substr(0, dot_pos);
	pref_size = prefix.size();
	postfix = pattern.substr(dot_pos + 1);
	post_size = postfix.size();
	for (auto& word : words) {
		int word_size = word.size();
		if (word_size < pref_size + post_size) {
			cout << "NE" << '\n';
			continue ;
		}
		pref_comp = word.compare(0, pref_size, prefix);
		post_comp = word.compare(word_size - post_size, post_size, postfix);
		if (word_size >= pref_size + post_size && pref_comp == 0 && post_comp == 0) {
			cout << "DA" << '\n';
		} else {
			cout << "NE" << '\n';
		}
	}
	return 0;
}
