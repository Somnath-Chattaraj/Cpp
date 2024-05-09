#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        cin >> a >> b;
        int na = a.size();
        int nb = b.size();
        if (a[na - 1] == 'S') {
            if (b[nb - 1] == 'S') {
                if (na == nb) {
                    cout << "=" << endl;

                } else if (na > nb) {
                    cout << "<" << endl;
                } else {
                    cout << ">" << endl;
                }
            } else {
                cout << "<" << endl;
            }
        } else if (a[na - 1] == 'M') {
            if (b[nb - 1] == 'M') {
                if (na == nb) {
                    cout << "=" << endl;

                } else if (na > nb) {
                    cout << ">" << endl;
                } else {
                    cout << "<" << endl;
                }
            } else if (b[nb - 1] == 'S') {
                cout << ">" << endl;
            } else if (b[nb - 1] == 'L') {
                cout << "<" << endl;
            }
        } else if (a[na - 1] == 'L') {
            if (b[nb - 1] == 'L') {
                if (na == nb) {
                    cout << "=" << endl;

                } else if (na > nb) {
                    cout << ">" << endl;
                } else {
                    cout << "<" << endl;
                }
            } else {
                cout << ">" << endl;
            }
        }
    }
}