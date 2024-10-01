#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    	// Optimized approach to find two indices that add up to the target
    
    	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wreturn-type"
    	vector<int> twoSum(vector<int>& nums, int target) {
	        unordered_map<int, int> um;
		for(size_t i=0; i < nums.size(); i++)
		{
			if(um.count(target - nums[i]))
				return {um[target - nums[i]], static_cast<int>(i)};
			um[nums[i]] = static_cast<int>(i);
		}	
    	}
	#pragma GCC diagnostic pop
};

// Main function to test the twoSum method
int main() {
    // Create a Solution object
    Solution sol;

    // Test case 1
    vector<int> nums1 = {2, 7, 11, 15}; // Example array
    int target1 = 9;                    // Example target
    vector<int> result1 = sol.twoSum(nums1, target1);
    cout << "Test Case 1: ";
    if (!result1.empty()) {
        cout << "Indices: [" << result1[0] << ", " << result1[1] << "]\n";
    } else {
        cout << "No two sum solution found.\n";
    }

    // Test case 2
    vector<int> nums2 = {3, 2, 4}; // Example array
    int target2 = 6;               // Example target
    vector<int> result2 = sol.twoSum(nums2, target2);
    cout << "Test Case 2: ";
    if (!result2.empty()) {
        cout << "Indices: [" << result2[0] << ", " << result2[1] << "]\n";
    } else {
        cout << "No two sum solution found.\n";
    }

    // Test case 3
    vector<int> nums3 = {3, 3}; // Example array
    int target3 = 6;            // Example target
    vector<int> result3 = sol.twoSum(nums3, target3);
    cout << "Test Case 3: ";
    if (!result3.empty()) {
        cout << "Indices: [" << result3[0] << ", " << result3[1] << "]\n";
    } else {
        cout << "No two sum solution found.\n";
    }

    return 0;
}
