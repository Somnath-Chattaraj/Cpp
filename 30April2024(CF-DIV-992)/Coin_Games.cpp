// #include <iostream>
// #include <string>

// using namespace std;

// int indexU (string s, int n) {
    
//     int left = 0;
//     int right = n-1;
//     while (right >= left ) {
//         if (s[left] == 'U') return left;
//         else if (s[right] == 'U') return right;
//         else {
//             left++;
//             right--;
//         }
//     }
//     return -1;
// }

// int main () {
//     int t;
//     cin >> t;
//     while (t>0) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int cnt = 0;
//         int index = indexU(s,n);
//         while (index != -1 && s.size() > 0) {
//             index = indexU(s,n);
//             if (s.size() > 2) {
//                 if (s[index - 1] == 'U') s[index - 1] = 'D';
//                 if (s[index - 1] == 'D') s[index - 1] = 'U';
//                 if (index + 1 < n) {
//                     if (s[index + 1] == 'U') s[index + 1] = 'D';
//                     if (s[index + 1] == 'D') s[index + 1] = 'U';
//                 }
//                 else {
//                     if (s[0] == 'U') s[0] = 'D';
//                     if (s[0] == 'D') s[0] = 'U';
//                 }
//                 s.erase(index, 1);
//                 cnt++;

//             }
//             else if (s.size() <= 2) {
//                 s.erase(index, 1);
//             }
//         }
//         if (cnt % 2) cout << "YES" << endl;
//         else cout << "NO" << endl;
//         t--;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int indexU(string s) {

//     int left = 0;
//     int right = s.size() - 1;
//     while (right >= left) {
//         if (s[left] == 'U') return left;
//         if (s[right] == 'U') return right;
//         left++;
//         right--;
//     }
//     return -1;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int cnt = 0;
//         int index = indexU(s);
//         while (index != -1 && s.size() > 0) {
//             index = indexU(s);
//             cout << "index: " <<  index << endl;
//             if (s.size() > 2) {
                
//                 if (index == 0) {
//                     if (s[s.size() - 1] == 'U') {
//                         s[s.size() - 1] = 'D';
//                         cout << "Done" << endl;
//                     } else if (s[s.size() - 1] == 'D') {
//                         s[s.size() - 1] = 'U';
//                     }
//                 }

//                 else {
//                     if (s[index - 1] == 'U') s[index - 1] = 'D';
//                     if (s[index - 1] == 'D') s[index - 1] = 'U';
//                 }
//                 if (index + 1 < n) {
//                     if (s[index + 1] == 'U') s[index + 1] = 'D';
//                     if (s[index + 1] == 'D') s[index + 1] = 'U';
//                 }
//                 else {
//                     if (s[0] == 'U') s[0] = 'D';
//                     if (s[0] == 'D') s[0] = 'U';
//                 }
//                 s.erase(index, 1);

//             }
//             else if (s.size() <= 2) {
//                 s.erase(index, 1);
//             }
//             cnt++;

//             cout << s << endl;
//             // cout << s[-1] << endl;

//             cout << cnt <<  endl;
//         }
//         if (cnt % 2) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int indexU(string s) {

    int left = 0;
    int right = s.size() - 1;
    while (right >= left) {
        if (s[left] == 'U') return left;
        if (s[right] == 'U') return right;
        left++;
        right--;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        // int index = indexU(s);
        while (s.size() > 0) {
            int index = indexU(s);
            // cout << "index: " <<  index << endl;
            if (index == -1) {
                break;
            }
            if (s.size() > 2) {
                
                if (index == 0) {
                    if (s[s.size() - 1] == 'U') {
                        s[s.size() - 1] = 'D';
                        // cout << "Done" << endl;
                    } else if (s[s.size() - 1] == 'D') {
                        s[s.size() - 1] = 'U';
                    }
                } else {
                    if (s[index - 1] == 'U') s[index - 1] = 'D';
                    else if (s[index - 1] == 'D') s[index - 1] = 'U';
                }

                if (index + 1 < s.size()) {
                    if (s[index + 1] == 'U') s[index + 1] = 'D';
                    else if (s[index + 1] == 'D') s[index + 1] = 'U';
                } else {
                    if (s[0] == 'U') s[0] = 'D';
                    else if (s[0] == 'D') s[0] = 'U';
                }
                s.erase(index, 1);

            } else if (s.size() <= 2) {
                s.erase(index, 1);
            }
            cnt++;

            // cout << s << endl;
            // cout << s[-1] << endl; // Indexing doesn't work like this in C++

            // cout << cnt <<  endl;
        }
        if (cnt % 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
