#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen; // map: number → index

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        // If complement is found in the map, return its index and current index
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }

        // Store the current number and its index
        seen[nums[i]] = i;
    }

    // No solution found (shouldn't happen per constraints)
    return {};
}

int main() {
    // Example 1
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;

    // Example 2
    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;

    // Example 3
    std::vector<int> nums3 = {3, 3};
    int target3 = 6;

    auto result1 = twoSum(nums1, target1);
    auto result2 = twoSum(nums2, target2);
    auto result3 = twoSum(nums3, target3);

    std::cout << "Example 1 Output: [" << result1[0] << ", " << result1[1] << "]\n";
    std::cout << "Example 2 Output: [" << result2[0] << ", " << result2[1] << "]\n";
    std::cout << "Example 3 Output: [" << result3[0] << ", " << result3[1] << "]\n";

    return 0;
}
