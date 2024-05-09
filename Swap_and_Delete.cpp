#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t>0) {
        string s;
        cin >> s;
        int cnt1 = 0;
        int cnt0 = 0;
        int cost = 0;
        if (s.size() == 1) {
            cout << 1 << endl;
        } else {
            for (int i=0; i<s.size(); i++) {
                if (s[i] == '1') cnt1++;
                else cnt0++;
            }
            if (cnt1 == cnt0) cout << 0 << endl;
            else if (cnt1 > cnt0) {
                int diff = cnt1 - cnt0;
                if (s.substr(0, s.size() - diff) == "1111") cout << cnt1 << endl;

                else cout << diff << endl; 
            } else {
                int diff = cnt0 - cnt1;
                if (s.substr(0, s.size() - diff) == "0000") cout << cnt0 << endl;
                else cout << diff << endl;
            }
        }
        t--;
    }
    return 0;
}