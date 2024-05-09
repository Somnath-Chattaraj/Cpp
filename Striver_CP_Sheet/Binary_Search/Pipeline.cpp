// Wrong solution


#include <iostream>

using namespace std;

bool check_possible(long long x, long long n, long long k) {
    long long a = k - x + 1;
    long long sum = (a * (x + k)) / 2;
    return sum >= n;
}

int main() {
    long long n, k;
    cin >> n >> k;
    long long sum = (k * (k + 1)) / 2;
    if (n > sum) {
        cout << -1 << endl;
        return 0;
    } else {
        long long lo = 1, hi = k;
        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;
            if (check_possible(mid, n, k)) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        cout << k - lo << endl;
    }
    return 0;
}