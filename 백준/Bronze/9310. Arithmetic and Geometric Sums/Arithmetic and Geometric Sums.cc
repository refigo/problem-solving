#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct BigInt {
    vector<int> digits;

    BigInt(long long v = 0) {
        if (v == 0) digits.push_back(0);
        while (v > 0) {
            digits.push_back(v % 10);
            v /= 10;
        }
    }

    BigInt operator+(const BigInt& o) const {
        BigInt res;
        res.digits.clear();
        int carry = 0;
        int n = max(digits.size(), o.digits.size());
        for (int i = 0; i < n || carry; ++i) {
            long long sum = carry;
            if (i < digits.size()) sum += digits[i];
            if (i < o.digits.size()) sum += o.digits[i];
            res.digits.push_back(sum % 10);
            carry = sum / 10;
        }
        if (res.digits.empty()) res.digits.push_back(0);
        return res;
    }

    BigInt operator*(int v) const {
        if (v == 0 || (digits.size() == 1 && digits[0] == 0)) return BigInt(0);
        BigInt res;
        res.digits.clear();
        long long carry = 0;
        for (size_t i = 0; i < digits.size() || carry; ++i) {
            long long cur = carry;
            if (i < digits.size()) cur += 1LL * digits[i] * v;
            res.digits.push_back(cur % 10);
            carry = cur / 10;
        }
        return res;
    }

    void print() const {
        for (int i = (int)digits.size() - 1; i >= 0; --i) {
            cout << digits[i];
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n && n != 0) {
        long long a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        long long d1 = a2 - a1;
        long long d2 = a3 - a2;

        if (d1 == d2) {
            long long sum = (long long)n * (2LL * a1 + (n - 1) * d1) / 2LL;
            cout << sum << "\n";
        } else {
            long long r = a2 / a1;
            BigInt sum(0);
            BigInt term(a1);
            for (int i = 0; i < n; ++i) {
                sum = sum + term;
                term = term * (int)r;
            }
            sum.print();
            cout << "\n";
        }
    }

    return 0;
}
