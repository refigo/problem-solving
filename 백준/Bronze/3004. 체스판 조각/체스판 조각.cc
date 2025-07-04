#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    int horizontal = N / 2;
    int vertical = N - horizontal;
    
    long long result = (long long)(horizontal + 1) * (vertical + 1);
    
    std::cout << result << std::endl;
    
    return 0;
}