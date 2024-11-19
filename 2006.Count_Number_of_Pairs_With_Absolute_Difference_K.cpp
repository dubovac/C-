/**
 * 2006. Count Number of Pairs With Absolute Difference K
 * Easy
 * Topics
 * Companies
 * Hint
 *
 * Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that |nums[i] - nums[j]| == k.
 *
 * The value of |x| is defined as:
 *
 *	x if x >= 0.
 *	-x if x < 0.
 *
 *
 *
 * Example 1:
 *
 *	Input: nums = [1,2,2,1], k = 1
 *	Output: 4
 *	Explanation: The pairs with an absolute difference of 1 are:
 *	- [1,2,2,1]
 *	- [1,2,2,1]
 *	- [1,2,2,1]
 *	- [1,2,2,1]
 *
 * Example 2:
 *
 *	Input: nums = [1,3], k = 3
 *	Output: 0
 *	Explanation: There are no pairs with an absolute difference of 3.
 *
 * Example 3:
 *
 *	Input: nums = [3,2,1,5,4], k = 2
 *	Output: 3
 *	Explanation: The pairs with an absolute difference of 2 are:
 *	- [3,2,1,5,4]
 *	- [3,2,1,5,4]
 *	- [3,2,1,5,4]
 */

#include <iostream>
#include <vector>

using namespace std;

int countKDifference(vector<int>& nums, int k) {
	int r = 0;

	for (size_t i = 0; i < nums.size() - 1; i++)
		for (size_t j = i + 1; j < nums.size(); j++) {
			int x = nums[j] - nums[i];
			if (x < 0)
				x = -x;
			if (x == k)
				r++;
		}

	return r;
}

int main(void) {
	vector<int> n1 = {1, 2, 2, 1};
	int k1 = 1;
	cout << countKDifference(n1, k1) << endl;

	vector<int> n2 = {1, 3};
	int k2 = 3;
	cout << countKDifference(n2, k2) << endl;

	vector<int> n3 = {3, 2, 1, 5, 4};
	int k3 = 2;
	cout << countKDifference(n3, k3) << endl;
}
