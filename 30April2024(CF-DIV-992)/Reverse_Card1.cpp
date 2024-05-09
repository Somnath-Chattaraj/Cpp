#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n,m;
        cin >> n >> m;
        long long ans = 0;
        for(int i=1; i<=m; i++) {
            long long x = n/i + 1;
            long long y = x/i;
            ans += y;
        }
        ans--;
        cout << ans << endl;

    }
    return 0;
}