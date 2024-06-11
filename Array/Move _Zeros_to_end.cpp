#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int j = -1;
        for (int i=0; i<nums.size()-1; i++ ) {
            if (nums[i] == 0) {
                j=i;
                break;
            }
        }

        if (j!=-1) {
            for (int i=j+1; i<nums.size(); i++) {
                if (nums[i] != 0 ) {
                    nums[j] = nums[i];
                    nums[i] = 0;
                    j++;
                }
            }
        }
    }
};
