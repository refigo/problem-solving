#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string line;
    getline(cin, line);
    
    int open_pos = line.find('(');
    
    if (open_pos == string::npos) {
        cout << line << '\n';
        cout << '-' << '\n';
    } else {
        string station_name = line.substr(0, open_pos - 1);
        int close_pos = line.find(')');
        string sub_station_name = line.substr(open_pos + 1, close_pos - open_pos - 1);
        
        cout << station_name << '\n';
        cout << sub_station_name << '\n';
    }
    
    return 0;
}