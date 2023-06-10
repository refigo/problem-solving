#include <string>
#include <vector>

using namespace std;

int fibonacci_loop(int n) {
    int fib_ret(0 + 1);
    int fib_last(1);
    int tmp(0);
    
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    for (int i = 0; i < n - 2; ++i) {
        fib_ret %= 1234567;
        tmp = fib_ret;
        fib_ret = fib_last + fib_ret;
        fib_last = tmp;
    }
    return fib_ret;
}

int solution(int n) {
    int answer(0);
    answer = fibonacci_loop(n);
    answer = answer % 1234567;
    return answer;
}