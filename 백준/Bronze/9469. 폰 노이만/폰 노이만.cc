#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int P;
    cin >> P;
    
    while (P--) {
        int N;
        double D, A, B, F;
        cin >> N >> D >> A >> B >> F;
        
        double collision_time = D / (A + B);
        
        double fly_distance = F * collision_time;
        
        cout << N << " " << fixed << setprecision(6) << fly_distance << '\n';
    }
    
    return 0;
}