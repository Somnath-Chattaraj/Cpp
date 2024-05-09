#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int max = 0;
        for (int i = 1; i < x; i++) {
            int res = gcd(x, i) + i;
            if (res >= max) { // Corrected condition: res >= max
                max = i;
            }
        }
        cout << max << endl;
    }
    return 0;
}
