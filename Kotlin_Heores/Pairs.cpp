// https://codeforces.com/contest/1959/problem/Cimport java.util.*

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cctype>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         vector<int> lower(26, 0), upper(26, 0);
//         for (char c : s) {
//             if (islower(c)) lower[c - 'a']++;
//             else upper[c - 'A']++;
//         }
//         // sort(lower.begin(), lower.end(), greater<int>());
//         // sort(upper.begin(), upper.end(), greater<int>());
//         // int operations = k, pairs = 0;
//         // for (int i = 0; i < 26; i++) {
//         //     if (lower[i] <= operations) {
//         //         pairs += lower[i];
//         //         operations -= lower[i];
//         //     } else {
//         //         pairs += operations;
//         //         break;
//         //     }
//         // }
//         // operations = k;
//         // for (int i = 0; i < 26; i++) {
//         //     if (upper[i] <= operations) {
//         //         pairs += upper[i];
//         //         operations -= upper[i];
//         //     } else {
//         //         pairs += operations;
//         //         break;
//         //     }
//         // }
//         // cout << pairs << endl;


//     }
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <map>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int n,k;
        cin >> n >> k;
        cin >> s;
        int burls = 0;
        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        for (char c : s) {
            if (freq[c] > 0 && ((islower(c) && freq[toupper(c)] > 0) || (isupper(c) && freq[tolower(c)] > 0))) {
                freq[c]--;
                if (islower(c)) freq[toupper(c)]--;
                else freq[tolower(c)]--;
                burls++;
            }
            cout << c << " " << freq[c] << endl;
        }
        int i = 0;
        while (k>0) {
            if (freq[s[i]] > 1 && k-freq[s[i]]/2 >= 0) {
                k -= freq[s[i]] / 2;
                burls += freq[s[i]] / 2;
                freq[s[i]] /= 2;
                
            } else if (freq[s[i]] > 1 && k-freq[s[i]]/2 < 0) {
                burls += k;
                k = 0;
                break;
            }
            i++;
            if (i==n) {
                i = 0;
            }
        }

        cout << burls << endl;
        
        
    }
    return 0;
}