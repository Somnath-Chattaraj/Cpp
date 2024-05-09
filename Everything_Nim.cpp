#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int small_int(vector<int> &arr) {
    int min = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0 && arr[i] < min) {
            min = arr[i];
        }
    }
    if (min == INT_MAX) return -1;
    return min;
}

int main() {
    int t; 
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        vector <int> arr(n , 0);
        int name = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int k = small_int(arr);
        int j = 0;
        while (k != -1) {
            j++;
            for (int i = 0; i < n; i++) {
                if (arr[i] > 0 ) {
                    arr[i] -= k;
                }
            }
            k = small_int(arr);
        }
        if (j % 2 == 0) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }

        t--;
    }
    return 0;
}
