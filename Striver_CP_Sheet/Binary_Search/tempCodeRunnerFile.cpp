#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check_possible(long long k, int n, long long h, vector<long long>& a) {
    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
        b[i] = min(a[i], k);
    }
    sort(b.rbegin(), b.rend());
    long long sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += b[i];
    }
    return sum >= h;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long h;
        cin >> n >> h;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long lo = 1, hi = 1e18;
        while (lo < hi) {
            long long mid = (lo + hi) / 2;
            if (check_possible(mid, n, h, a)) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        cout << lo << endl;
    }
    return 0;
}