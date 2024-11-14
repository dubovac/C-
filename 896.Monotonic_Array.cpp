/**
 * 896. Monotonic Array
 * Easy
 * Topics
 * Companies
 *
 * An array is monotonic if it is either monotone increasing or monotone decreasing.
 *
 * An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j].
 * An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].
 *
 * Given an integer array nums, return true if the given array is monotonic, or false otherwise.
 *
 *
 *
 * Example 1:
 *
 *	Input: nums = [1,2,2,3]
 *	Output: true
 *
 * Example 2:
 *
 *	Input: nums = [6,5,4,4]
 *	Output: true
 *
 * Example 3:
 *
 *	Input: nums = [1,3,2]
 *	Output: false
 *
 *
 * Constraints:
 *
 *	1 <= nums.length <= 10^5
 *	-10^5 <= nums[i] <= 10^5
 */

#include <iostream>
#include <cstdbool>
#include <vector>

using namespace std;

bool isMonotonic(vector<int>& nums) {
	int incr = 0;
	int decr = 0;

	for (size_t i = 0; i < nums.size() - 1; i++) {
		if (nums[i + 1] > nums[i])
			incr = 1;
		if (nums[i + 1] < nums [i])
			decr = 1;
		if (incr == 1 && decr == 1)
			return false;
	}

	return true;
}

int main(void) {
	vector<int> a = {1, 2, 2, 3};
	cout << (isMonotonic(a) ? "True" : "False") << endl;

	vector<int> b = {6, 5, 4, 4};
	cout << (isMonotonic(b) ? "True" : "False") << endl;

	vector<int> c = {1, 3, 2};
	cout << (isMonotonic(c) ? "True" : "False") << endl;

	vector<int> d = {4, 4, 4, 4};
	cout << (isMonotonic(d) ? "True" : "False") << endl;
}
