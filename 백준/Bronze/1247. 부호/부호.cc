#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int t = 0; t < 3; ++t) {
        int n;
        cin >> n;
        
        vector<string> nums;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            nums.push_back(s);
        }
        
        sort(nums.begin(), nums.end(), [](const string& a, const string& b) {
            bool a_neg = (a[0] == '-');
            bool b_neg = (b[0] == '-');
            if (a_neg != b_neg) return b_neg;
            if (!a_neg) {
                if (a.size() != b.size()) return a.size() > b.size();
                return a > b;
            } else {
                string a_abs = a.substr(1);
                string b_abs = b.substr(1);
                if (a_abs.size() != b_abs.size()) return a_abs.size() < b_abs.size();
                return a_abs < b_abs;
            }
        });
        
        __int128 sum = 0;
        for (const string& s : nums) {
            __int128 val = 0;
            bool neg = (s[0] == '-');
            int start = neg ? 1 : 0;
            for (int i = start; i < s.size(); ++i) {
                val = val * 10 + (s[i] - '0');
            }
            if (neg) val = -val;
            sum += val;
        }
        
        if (sum == 0) cout << "0\n";
        else if (sum > 0) cout << "+\n";
        else cout << "-\n";
    }
    
    return 0;
}