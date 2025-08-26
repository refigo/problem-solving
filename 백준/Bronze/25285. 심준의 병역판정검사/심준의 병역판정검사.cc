#include <iostream>
using namespace std;

int getGrade(int height, int weight) {
    double h = height;
    
    if (h < 140.1) {
        return 6;
    }
    
    if (h >= 140.1 && h < 146) {
        return 5;
    }
    
    if (h >= 146 && h < 159) {
        return 4;
    }
    
    if (h >= 204) {
        return 4;
    }
    
    double heightInMeters = h / 100.0;
    double bmi = weight / (heightInMeters * heightInMeters);
    
    if (h >= 159 && h < 161) {
        if (bmi >= 16.0 && bmi < 35.0) {
            return 3;
        } else {
            return 4;
        }
    }
    
    if (bmi < 16.0 || bmi >= 35.0) {
        return 4;
    }
    
    if ((bmi >= 16.0 && bmi < 18.5) || (bmi >= 30.0 && bmi < 35.0)) {
        return 3;
    }
    
    if ((bmi >= 18.5 && bmi < 20.0) || (bmi >= 25.0 && bmi < 30.0)) {
        return 2;
    }
    
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int height, weight;
        cin >> height >> weight;
        
        int grade = getGrade(height, weight);
        cout << grade << "\n";
    }
    
    return 0;
}