#include <iostream>
#include <vector>

using namespace std;


// Brute force Method
void left_rotate(int arr[], int n, int d) {
    d = d % n;

    int temp[d];
    for (int i=0; i<d; i++) {
        temp[i] = arr[i];
    }
    for (int i=d; i<n; i++ ) {
        arr[i-d] = arr[i];
    }
    for(int i=n-d; i<n; i++ ) {
        arr[i] = temp[i - (n-d)];
    }
}

//Most optimal Method
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Ensure k is within the range [0, n)

        // Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the rest of the elements after k
        reverse(nums.begin() + k, nums.end());
    }
};