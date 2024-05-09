// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// bool check_subsequence(string a, string b) {
//     int i = 0, j = 0;
//     while (i < a.size() && j < b.size()) {
//         if (a[i] == b[j]) {
//             i++;
//         }
//         j++;
//     }
//     return i == a.size(); 
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         string a, b;
//         cin >> a >> b;
//         int k = 1;
//         // if (check_subsequence(a,b)) {
//         //     k++;
//         // }
//         while (check_subsequence(a.substr(0,k),b) && k<=n) {
//             k++;
//         }

//         cout << k - 1 << endl;

//     }
//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

bool check_subsequence(string a, string b) {
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            i++;
        }
        j++;
    }
    return i == a.size(); 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        
    
        int low = 1, high = n, result = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check_subsequence(a.substr(0, mid), b)) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        cout << result << endl;
    }
    return 0;
}
