// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main () {
//     int t;
//     cin >> t;
//     while (t>0) {
//         int n;
//         cin >> n;
//         vector <int> a(n, 0);
//         for (int i=0; i<n; i++) {
//             cin >> a[i];
//         }
//         vector <int> b(n, 0);
//         for (int i=0; i<n; i++) {
//             cin >> b[i];
//         }
//         int ans = 0;
//         for (int i=0; i<n; i++) {
//             if (a[i] > b[i]) {
//                 // a.pop_back();
//                 // a.push_back();
//                 a[n-1] = min_element(b.begin(), b.end());
//                 sort(a.begin(), a.end());
//                 ans++;
//             } else {
//                 i++;
//             }
//         }
//         cout << ans << endl;
//         t--;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int ans = 0;
        int i = 0;
        while (i<n) {
            if (a[i] > b[i]) {
                // // Find the minimum element in vector b
                // auto min_it = min_element(b.begin(), b.end());
                // int min_val = *min_it;
                // // Update the corresponding element in vector a
                // a[i] = min_val;
                // // Increment ans
                a[n-1] = b[i];
                sort(a.begin(), a.end());
                ans++;
                // for (int i = 0; i < n; i++) {
                //     // cin >> b[i];
                //     cout << a[i] << " ";
                // }
                // cout << endl;
                
            }
            i++;
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}
