#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for(int i = 2; i * i <= N; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    vector<int> primes;
    for(int i = 2; i <= N; i++) {
        if(isPrime[i]) {
            primes.push_back(i);
        }
    }
    
    int count = 0;
    int sum = 0;
    int left = 0;
    
    for(int right = 0; right < primes.size(); right++) {
        sum += primes[right];
        
        while(sum > N && left <= right) {
            sum -= primes[left];
            left++;
        }
        
        if(sum == N) {
            count++;
        }
    }
    
    cout << count << '\n';
    
    return 0;
}