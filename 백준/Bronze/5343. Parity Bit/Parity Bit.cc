#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num_lines;
    if (!(cin >> num_lines)) return 0;

    while (num_lines--) {
        string line;
        cin >> line;

        int error_count = 0;
        for (int i = 0; i < line.length(); i += 8) {
            int ones_count = 0;
            for (int j = 0; j < 7; ++j) {
                if (line[i + j] == '1') {
                    ones_count++;
                }
            }

            int parity_bit = (line[i + 7] - '0');
            int expected_parity = (ones_count % 2 == 1) ? 1 : 0;

            if (parity_bit != expected_parity) {
                error_count++;
            }
        }
        cout << error_count << "\n";
    }

    return 0;
}
