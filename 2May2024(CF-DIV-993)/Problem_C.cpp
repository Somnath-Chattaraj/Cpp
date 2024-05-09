#include <iostream>
#include <vector>
#include <string>

#define long long ll;

using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> x(n - 1, 0);
//         for (int i = 0; i < n - 1; i++) {
//             cin >> x[i];
//         }
//         vector<int> a(n, 0);
//         a[0] = x[0] + 1;
//         for (int i = 1; i < n; i++) {
             
//             int j = 0;
//             int next = a[i - 1] * j + x[i - 1];
//             while (1) {
//                 next = a[i - 1] * j + x[i - 1];
//                 if (next > x[i] && next % a[i - 1] == x[i - 1]) {
//                     a[i] = next;
//                     break;
//                 }
//                 j++;
//             }
            
//         }
//         for (int i = 0; i < n; i++) {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> arr(n-1,0);
        for (int i=0; i<n-1; i++) {
            cin >> arr[i];
        }
        vector <int> ans(n,0);
        ans[n-1] = 1000000000;
        for (int i=n-2; i>=0; i--) {
            ans[i] = ans[i+1] - arr[i];
        }

        for (int i=0; i<n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}