#include <iostream>
#include <vector>
#include <unordered_set>
#include <array>

using namespace std;
// class Solution {
// public:
//     vector<int> rearrangeArray(std::vector<int> &nums)
//     {
//         for (int j=0; j<nums.size(); j++) {
//         for (int i=1 ; i<nums.size(); i++) {
//             if (nums[i] > 0 && nums[i-1] < 0) {
//                 int temp = nums[i]; 
//                 nums[i] = nums[i-1];
//                 nums[i-1] = temp;
//             }
//         }}
//         for  (int i=nums.size()/2; i<nums.size(); i++) {
//             for (int j=i-1 ; j>0 ; j++) {
//                 int temp = nums[i];
//                 nums[i] = nums[i-1];
//                 nums[i-1] = temp;
//             }
//         }
//         return nums;
//     }
// };


std::vector<std::vector<int>> setZeros(std::vector<std::vector<int>>& matrix) {
    std::unordered_set<std::array<int, 2>> loc;
    
    // Finding zeros in the matrix and storing their positions in loc
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 0) {
                loc.insert({i, j});
            }
        }
    }

    // Setting entire row and column to zero if zero found in that position
    for (auto it : loc) {
        for (int i = 0; i < matrix.size(); i++) {
            matrix[i][it[1]] = 0;
        }

        for (int i = 0; i < matrix[0].size(); i++) {
            matrix[it[0]][i] = 0;
        }
    }

    return matrix;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    std::cout << "Original Matrix:" << std::endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    std::vector<std::vector<int>> result = setZeros(matrix);

    std::cout << "\nMatrix After Setting Zeros:" << std::endl;
    for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
