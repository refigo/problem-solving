#include <bits/stdc++.h>
using namespace std;
int a, b, c;
vector<vector<int>> vtime(3, vector<int>(2, 0));
int min_val = 101;
int max_val = 0;
int cur_count;
int ans_sum;
int cur_cost_per_car;

bool is_intime(int cur_time, int start, int end) {
    int ret = false;
    if (start <= cur_time && cur_time < end) {
        ret = true;
    }
    return ret;
}

int get_curr_car_count(int cur_time) {
    int ret = 0;
    for (int i = 0; i < 3; ++i){
        if (is_intime(cur_time, vtime[i][0], vtime[i][1]))
            ret += 1;
    }
    return ret;
}

int main(){
    cin >> a >> b >> c;
    for (int i = 0; i < 3; ++i){
        cin >> vtime[i][0] >> vtime[i][1];
        if (vtime[i][0] < min_val)
            min_val = vtime[i][0];
        if (max_val < vtime[i][1])
            max_val = vtime[i][1];
    }
    for (int cur_time = min_val; cur_time <= max_val; ++cur_time){
        cur_count = get_curr_car_count(cur_time);
        if (cur_count == 1)
            cur_cost_per_car = a;
        else if (cur_count == 2)
            cur_cost_per_car = b;
        else if (cur_count == 3)
            cur_cost_per_car = c;
        ans_sum += cur_count * cur_cost_per_car;
    }
    cout << ans_sum << '\n';
    return 0;
}
