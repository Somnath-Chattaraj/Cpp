#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        map <char, int> mp;
        if (n == 1) {
            cout << "NO" << endl;
        } else {
            for (int i=0; i<n; i++) {
                mp[s[i]]++;
            }
            if (mp[s[0]] == n) {
                cout << "NO" << endl;
            }
            else {
                string ori = s;
                cout << "YES" << endl;
                sort(s.begin(), s.end());
                if (ori == s) {
                    sort(s.begin(), s.end(), greater<int>());
                    cout << s << endl;
                } else {
                    cout << s << endl;
                }
            }
        }
    }
    return 0;
}