// #include <iostream>
// #include <cmath>
// #include <vector>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int cnt = 0;
//         vector <int> a(n);
//         for (int i=0; i<n; i++) {
//             cin >> a[i];
//         }
//         for (int i=1; i<=n; i++) {
//             for (int j=1; j<=n; j++) {
//                 if (pow(a[i-1],j) <= a[j-1]) {
//                     cnt++;
//                     // cout << i << " " << j << endl;
//                 }
//             }
//         }
//         cout << cnt << endl;
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int ones = 0, twos = 0, threesAndFours = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                ones++;
            } else if (a[i] == 2) {
                twos++;
            } else if (a[i] == 3 || a[i] == 4) {
                threesAndFours++;
            }
        }
        // Subtract ones from total count because we don't count (i, i) pairs
        int count = ones * (n - 1);
        // Add pairs where a[i] is 2 and a[j] is 3 or 4
        count += twos * threesAndFours;
        cout << count << endl;
    }
    return 0;
}
