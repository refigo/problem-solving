#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swapCups(vector<int>& cups, char move) {
    switch (move) {
        case 'A':
            swap(cups[0], cups[1]);
            break;
        case 'B':
            swap(cups[0], cups[2]);
            break;
        case 'C':
            swap(cups[0], cups[3]);
            break;
        case 'D':
            swap(cups[1], cups[2]);
            break;
        case 'E':
            swap(cups[1], cups[3]);
            break;
        case 'F':
            swap(cups[2], cups[3]);
            break;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string moves;
    cin >> moves;
    
    vector<int> cups = {1, 0, 0, 2};
    
    for (char move : moves) {
        swapCups(cups, move);
    }
    
    int smallBallPos = 0;
    int largeBallPos = 0;
    
    for (int i = 0; i < 4; i++) {
        if (cups[i] == 1) {
            smallBallPos = i + 1;
        } else if (cups[i] == 2) {
            largeBallPos = i + 1;
        }
    }
    
    cout << smallBallPos << '\n';
    cout << largeBallPos << '\n';
    
    return 0;
}