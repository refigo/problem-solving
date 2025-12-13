#include <bits/stdc++.h>
using namespace std;

static void print_clean_double(double v){
    long long iv = llround(v);
    if (fabs(v - (double)iv) < 1e-9){
        cout << iv << '\n';
        return;
    }
    ostringstream oss;
    oss.setf(std::ios::fixed);
    oss << setprecision(10) << v;
    string s = oss.str();
    while (!s.empty() && s.back() == '0') s.pop_back();
    if (!s.empty() && s.back() == '.') s.pop_back();
    cout << s << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true){
        long long a,b,c,d,e,f;
        if(!(cin >> a >> b >> c >> d >> e >> f)) return 0;
        if (a==0 && b==0 && c==0 && d==0 && e==0 && f==0) break;
        long long arr[6] = {a,b,c,d,e,f};
        long long mx = arr[0], mn = arr[0], sum = 0;
        for (int i=0;i<6;++i){
            sum += arr[i];
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
        }
        double avg = (sum - mx - mn) / 4.0;
        print_clean_double(avg);
    }
    return 0;
}