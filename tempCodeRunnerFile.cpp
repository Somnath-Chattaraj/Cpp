#include <iostream>

using namespace std;

int gcd(int a, int b) {
    // Ensure a is greater than or equal to b
    if (b > a) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Apply Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // GCD is the remaining value of 'a'
    return a;
}

int main () {
    int t;
    cin >> t;
    while (t>0) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        int c = 0;
        
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                if ((i+j) % (j*gcd(i,j)) == 0) c++;
            }
        }
        cout << c << endl;

        t--;
    }

    return 0;

}