#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int p;
    cin >> p;
    
    int software_dev = 0;
    int embedded_dev = 0;
    int ai_dev = 0;
    int first_year = 0;
    
    for (int i = 0; i < p; i++) {
        int grade, class_num, student_num;
        cin >> grade >> class_num >> student_num;
        
        if (grade == 1) {
            first_year++;
        } else {
            if (class_num == 1 || class_num == 2) {
                software_dev++;
            } else if (class_num == 3) {
                embedded_dev++;
            } else if (class_num == 4) {
                ai_dev++;
            }
        }
    }
    
    cout << software_dev << "\n";
    cout << embedded_dev << "\n";
    cout << ai_dev << "\n";
    cout << first_year << "\n";
    
    return 0;
}