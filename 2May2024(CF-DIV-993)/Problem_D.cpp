#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k,Pb,Ps;
        cin >> n>> k>> Pb>> Ps;
        vector <int> p(n,0);
        vector <int> a(n,0);
        for (int i=0; i<n; i++) {
            cin >> p[i];
        }
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int sum_B = 0, sum_S = 0;
        for (int i = 1; i <= k; i++) {
            auto max_a = max_element(a.begin(), a.end());
            if (a[Ps - 1] == a[Pb - 1] && a[Ps-1] == *max_a) {
                break;
            }
            sum_B += a[Pb - 1];
            sum_S += a[Ps - 1];
            if (a[Pb-1] == a[p[Pb-1]-1] && a[Ps-1] == a[p[Ps-1]-1]) {
                break;
            }
            // cout << "Sasha Score: " << a[Ps - 1] << endl;;
            if (a[Pb - 1] < a[p[Pb - 1] - 1]) {
                Pb = p[Pb - 1];
            }
            // cout << "Sasha Score: " << a[Ps - 1] << endl;;
            if (a[Ps - 1] < a[p[Ps - 1] - 1]) {
                Ps = p[Ps - 1];
            }
            
            
        }

            // cout << sum_B << endl;
            // cout << sum_S << endl;
        if (sum_B > sum_S) {
            cout << "Bodya" << endl;
        } else if (sum_B == sum_S) {
            cout << "Draw" << endl;
        } else {
            cout << "Sasha" << endl;
        }
        
    }
    return 0;
}