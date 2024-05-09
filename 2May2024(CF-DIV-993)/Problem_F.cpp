#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr; // Vector of vectors to hold pairs of integers
        arr.push_back({1, 1}); // Push the first pair {1, 1} into arr
        int max_val = 2 * n - 2; // Calculate the maximum value for the loop
        int i = 2;
        while (i < max_val) {
            if (n > 1) {
                arr.push_back({n, n}); // Push {n, n} into arr
            }
            n--;
            i += 2;
        }
        for (int j = 1; j < n; j++) {
            arr.push_back({1,2}); // Push {j, j} into arr
        }
        // arr.push_back({1, 2}); // Push the last pair {1, 2} into arr
        // Printing the elements of arr (for demonstration)
        for (const auto &sub_arr : arr) {
            for (int val : sub_arr) {
                cout << val << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}