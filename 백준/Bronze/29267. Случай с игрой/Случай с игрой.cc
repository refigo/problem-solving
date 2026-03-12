#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    int current_ammo = 0;
    int last_saved_ammo = 0;

    for (int i = 0; i < n; ++i) {
        string action;
        cin >> action;

        if (action == "save") {
            last_saved_ammo = current_ammo;
        } else if (action == "load") {
            current_ammo = last_saved_ammo;
        } else if (action == "shoot") {
            current_ammo--;
        } else if (action == "ammo") {
            current_ammo += k;
        }

        cout << current_ammo << "\n";
    }

    return 0;
}
