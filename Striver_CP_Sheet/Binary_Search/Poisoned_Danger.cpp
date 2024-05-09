// Failed for one testcase on codeforces

#include <iostream>
#include <vector>

using namespace std;

bool check_possible(long long k, long long n, long long h, vector<int> &a) {
    int i = 0;
    long long sum = 0;
    while (i < n) {
        long long j = 0;
        
        if (i < n-1 && a[i] + k - 1 <= a[i+1]) {
            // j = k;
            sum+=k;
        } else if (i<n-1 && a[i] + k - 1 > a[i+1]) {
            // j = k;
            sum+= (a[i+1] - a[i]); 
        } else if (i == n-1) {
            // j = k;
            sum+=k;
        }
        i++;
         
    }
    return sum >= h;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,h;
        cin >> n >> h;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long lo = 1, hi = 1e15;
        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;
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