// description
// Given an array of integers nums and an integer target, 
// return indices of the two numbers such that they add up to target.

// example:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = sol.twoSum(nums, target);

    if (result.size() == 2) {
        std::cout << "Indices: " << result[0] << " " << result[1] << std::endl;
        std::cout << "Numbers: " << nums[result[0]] << " " << nums[result[1]] << std::endl;
    } else {
        std::cout << "No two elements found with the given sum." << std::endl;
    }

    return 0;
}
