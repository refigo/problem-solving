#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, double> price = {
        {"Paper", 57.99},
        {"Printer", 120.50},
        {"Planners", 31.25},
        {"Binders", 22.50},
        {"Calendar", 10.95},
        {"Notebooks", 11.20},
        {"Ink", 66.95}
    };
    string s;
    double total = 0.0;
    while (true){
        if(!getline(cin, s)) break;
        if (s == "EOI") break;
        auto it = price.find(s);
        if (it != price.end()) total += it->second;
    }
    cout.setf(std::ios::fixed);
    cout << '$' << setprecision(2) << total << '\n';
    return 0;
}