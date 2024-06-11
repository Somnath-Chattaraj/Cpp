// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3


// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int count = 0;
        int candidate;
        
        for (int i=0; i<nums.size(); i++) {
            if (count == 0) {
                count = 1;
                candidate = nums[i];
            }
            
            else if (nums[i] == candidate) {
                count++;
            } 
            else {
                count--;
            }
        }
        
        return candidate;
        
    }
};