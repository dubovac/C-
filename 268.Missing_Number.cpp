/**
 * 268. Missing Number
 * Easy
 * Topics
 * Companies
 *
 * Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
 *
 *
 *
 * Example 1:
 *
 * 	Input: nums = [3,0,1]
 * 	Output: 2
 * 	Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
 *
 * Example 2:
 *
 * 	Input: nums = [0,1]
 * 	Output: 2
 * 	Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
 *
 * Example 3:
 *
 * 	Input: nums = [9,6,4,2,3,5,7,0,1]
 * 	Output: 8
 * 	Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9].
 * 	8 is the missing number in the range since it does not appear in nums.
 *	
 *	
 *
 * Constraints:
 *
 * 	n == nums.length
 * 	1 <= n <= 104
 * 	0 <= nums[i] <= n
 * 	All the numbers of nums are unique.
 */
#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums) {
	int result = -1;

	for (size_t i = 0; i <= nums.size(); i++) {
		size_t j = 0;

		while (j < nums.size() ) {
			if ((int) i == nums[j])
				break;
			j++;
		}

		if (j < nums.size())
			continue;
		else {
			result = i;
			break;
		}
	}

	return result;
}

int main(void) {
	vector<int> nums0 = {3, 0, 1};

	cout << missingNumber(nums0) << endl;

	vector<int> nums1 = {0, 1};

	cout << missingNumber(nums1) << endl;

	vector<int> nums2 = {9, 6, 4, 2, 3, 5, 7, 0, 1};

	cout << missingNumber(nums2) << endl;
}
