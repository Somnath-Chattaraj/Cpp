#include <iostream>
#include <vector>

using namespace std;

// int n,k;
// vector <int> a(n),b(n);


bool check_possible(long long x, vector<int> &a, vector<int> &b, int n, int k) {
    int i = 0;
    while (k>=0 && i <= n - 1) {
        // cout << "a[i] " << a[i] << endl;
        // cout << "b[i] " << b[i] << endl;
        if (a[i] * x > b[i]) {
            
            k -= (a[i]*x - b[i]);
            if (k<0) break;
            // cout << "k1 " << k << endl;
        }
        i++;
        // cout <<"k "<< k << endl;
        // cout <<"i "<< i << endl;

    }
    return i == n;
}

int main() {
    // Your code here

    int n, k;
    cin >> n >> k;
    vector <int> a(n), b(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        cin >> b[i];
    }

    int lo = 0, hi = 3000;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (check_possible(mid, a, b, n, k)) {
            lo = mid + 1;
            // cout << lo << endl;
        } else {
            hi = mid;
            // cout << "hi" << hi << endl;
        }
    }
    cout << lo - 1 << endl;

    // cout << check_possible(4, a, b, n, k) << endl;


    
    return 0;
}
