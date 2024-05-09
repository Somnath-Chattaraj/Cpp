#include<iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t>0) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int arr[n];
        int max = -1;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int flag = true;
        for (int i=0; i<n; i++) {
            int rem = arr[i] % k;
            if (rem == 0) {
                cout << 0 << endl;
                flag = false;
                break;
            }
            if (rem > max)  {
                max = rem;
            }
        }
        if (flag && k!=4) cout << k - max << endl;
        if (flag && k==4) {
            int cnt = 0;
            int m = 1;
            for (int i=0; i<n; i++) {
                if (arr[i] % 2 == 0) cnt ++;
                m *= arr[i];
            }
            // if (m % 4 == 0) cout << 0 << endl;
            // else if (k - max > 2) cout << 2 << endl;
            // else cout << k - max << endl;
            if (m % k == 0) cout << 0 <<endl;
            else if (cnt % 2 == 0 && cnt != 0) cout << 0 << endl;
            else if (cnt == 0) {
                if (k-max > 2) cout << 2 << endl;
                else cout << k - max << endl;
            }
            else cout << 1<< endl;
        }
        t--;
    }
    return 0;
}
