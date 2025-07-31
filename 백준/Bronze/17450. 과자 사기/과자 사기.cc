#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s_price, s_weight;
    int n_price, n_weight;
    int u_price, u_weight;
    
    cin >> s_price >> s_weight;
    cin >> n_price >> n_weight;
    cin >> u_price >> u_weight;
    
    double s_efficiency, n_efficiency, u_efficiency;
    
    int s_total_cost = s_price * 10;
    int n_total_cost = n_price * 10;
    int u_total_cost = u_price * 10;
    
    if (s_total_cost >= 5000) {
        s_total_cost -= 500;
    }
    
    if (n_total_cost >= 5000) {
        n_total_cost -= 500;
    }
    
    if (u_total_cost >= 5000) {
        u_total_cost -= 500;
    }
    
    s_efficiency = static_cast<double>(s_weight * 10) / s_total_cost;
    n_efficiency = static_cast<double>(n_weight * 10) / n_total_cost;
    u_efficiency = static_cast<double>(u_weight * 10) / u_total_cost;
    
    if (s_efficiency > n_efficiency && s_efficiency > u_efficiency) {
        cout << "S" << "\n";
    } else if (n_efficiency > s_efficiency && n_efficiency > u_efficiency) {
        cout << "N" << "\n";
    } else {
        cout << "U" << "\n";
    }
    
    return 0;
}