#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector <int> a_org = a;
    sort(a.begin(), a.end());
    if (a_org == a) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}