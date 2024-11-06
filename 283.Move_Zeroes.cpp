/**
 * 283. Move Zeroes
 * Easy
 * Topics
 * Companies
 * Hint
 *
 * Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 *
 * Note that you must do this in-place without making a copy of the array.
 *
 *
 *
 * Example 1:
 *
 *	Input: nums = [0,1,0,3,12]
 *	Output: [1,3,12,0,0]
 *
 * Example 2:
 *
 *	Input: nums = [0]
 *	Output: [0]
 *
 *
 *
 * Constraints:
 *
 *	1 <= nums.length <= 10^4
 *	-231 <= nums[i] <= 231 - 1
 *
 *
 * Follow up: Could you minimize the total number of operations done?
 */

#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++)
	    if (nums[i] == 0)
		    for (size_t j = i + 1; j < nums.size(); j++)
			    if (nums[j] != 0) {
				    nums[i] ^= nums[j];
				    nums[j] ^= nums[i];
				    nums[i] ^= nums[j];
				    break;
			    }
}

int main(void) {
	vector<int> n = {0, 1, 0, 3, 12};
	for (size_t i = 0; i < n.size(); i++)
		cout << n[i] << '\t';
	cout << endl;
	moveZeroes(n);
	for (size_t i = 0; i < n.size(); i++)
		cout << n[i] << '\t';
	cout << endl;
}
