//Problem Link:
// https://codeforces.com/contest/1969/problem/A

#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t>0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        // vector<int> pre;
        if (n == 2) cout << 2 << endl;
        else {
        int pre = 0;
        int inv = 0;
        bool flag = false;
        int i = 1;
        for (int i=1; i<=n; i++) {
            int j = arr[i-1];
            if (arr[j-1] == i) {
                cout << 2 << endl;
                flag = true;
                break;
            }
        }
        if (!flag ) {
            cout << 3 << endl;
        }
        }
        t--;
    }
}