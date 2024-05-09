#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_total_sum(vector<int>& arr, int k) {
    int n = arr.size();
    
    // Initialize a table to store the minimum total sum
    vector<vector<int>> dp(n, vector<int>(k + 1, INT_MAX));
    
    // Base case: if there's only one element in the array, the minimum total sum is that element
    dp[0][0] = arr[0];
    
    // Iterate through each element of the array
    for (int i = 1; i < n; i++) {
        // Iterate through each number of operations
        for (int j = 0; j <= k; j++) {
            // Try all possible values for the current element after applying operations
            for (int x = 0; x <= j; x++) {
                if (i - x >= 0 && arr[i] >= arr[i - x]) {
                    dp[i][j] = min(dp[i][j], dp[i - x][j - x] + arr[i]);
                }
            }
        }
    }
    
    // Find the minimum total sum for the last element of the array
    int min_sum = INT_MAX;
    for (int i = 0; i <= k; i++) {
        min_sum = min(min_sum, dp[n - 1][i]);
    }
    
    return min_sum;
}

int main() {
    vector<int> arr = {3, 1, 2};
    int k = 1;
    cout << min_total_sum(arr, k) << endl; // Output: 4
    
    return 0;
}
