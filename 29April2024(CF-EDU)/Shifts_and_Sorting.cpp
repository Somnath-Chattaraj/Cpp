//Problem Link:
// https://codeforces.com/contest/1969/problem/B

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std; 

// int main() {
//     int t;
//     cin >> t;
//     while (t > 0) {
//         string s;
//         cin >> s;
//         string sorted = s; 
//         sort(sorted.begin(), sorted.end());
//         int i = 0;
//         int one = 0;
//         int cost = 0;
//         while (s != sorted) {
//             while (s[i] == 0) {
//                 one++;
//                 i++;
//             }
//             while (s[i] != 0) {
//                 i++;
//             }
//             s[one] = 0;
//             s[i] = 1;
//             cost += (i-one+1);
//             one++;
//             // while (s[i] != 1) {

//             // }
//         }
//         cout << cost << endl;
//         t--;
//     }
//     return 0;
// }
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t > 0) {
//         string s;
//         cin >> s;
//         string sorted = s;
//         sort(sorted.begin(), sorted.end());
//         int i = 0;
//         int one = 0;
//         int cost = 0;
//         if (s==sorted) cout << 0 << endl;
//         else {
//         while (1) {
//             // Count consecutive zeros
//             while (s[i] == '0') {
//                 one++;
//                 i++;
//             }
//             // Find the next '1'
//             while (s[i] != '0') {
//                 i++;
//             }
//             // Swap '0' and '1'
//             s[one] = '0';
//             s[i] = '1';
//             // cout << s << endl;
//             // Calculate cost and update positions
//             cost += (i - one + 1);
//             one++;
//             if (s == sorted) {
//                 break;
//             }
//             if (i >= s.size()) {
//                 break;
//             }
//         }
        
//         cout << cost << endl;
//         }
//         t--;
//     }
//     return 0;
// }

//----------------------------------------Method 1(Something Wrong)---------------------------------------


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        string s;
        cin >> s;
        string sorted = s;
        sort(sorted.begin(), sorted.end());
        int i = 0;
        int one = 0;
        long long cost = 0;
        
        while (s != sorted) {
            // Count consecutive zeros
            while (i < s.size() && s[i] == '0') {
                one++;
                i++;
            }
            // Find the next '1'
            while (i < s.size() && s[i] != '0') {
                i++;
            }
            // Swap '0' and '1'
            if (i < s.size()) {
                s[one] = '0';
                s[i] = '1';
                // Calculate cost and update positions
                cost += (i - one + 1);
                one++;
            }
        }
        
        cout << cost << endl;
        t--;
    }
    return 0;
}





//------------------------------------------------Method2-----------------------------------------------
// 63% 4:30
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         string s;
//         cin >> s;
//         int i=0;
//         int n = s.size();
//         int cntOne = 0;
//         // int badZero = -1;
//         long long cost = 0;
//         while (i<s.size()) {
//             if (s[i] == '1' ) {
//                 cntOne++;
//             }
//             // if (s[i] == '0' && (i>0 && s[i-1] == '1')) {
//             //     // badZero = i;
//             //     s[i] = '1';
//             //     s[firstOne] = '0'; 
//             //     cost += (i - firstOne + 1);
//             //     firstOne++;
//             // }
//             else {
//                 if (cntOne) cost+=cntOne+1;
//             }

//             i++;
//         }
//         cout << cost << endl;
        
//     }
// }