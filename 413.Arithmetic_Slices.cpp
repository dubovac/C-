/**
 * 413. Arithmetic Slices
 * Medium
 * Topics
 * Companies
 *
 * An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.
 *
 *	For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.
 *
 * Given an integer array nums, return the number of arithmetic subarrays of nums.
 *
 * A subarray is a contiguous subsequence of the array.
 *
 *
 *
 * Example 1:
 *
 *	Input: nums = [1,2,3,4]
 *	Output: 3
 *	Explanation: We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself.
 *
 * Example 2:
 *
 *	Input: nums = [1]
 *	Output: 0
 *
 *
 *
 * Constraints:
 *
 *	1 <= nums.length <= 5000
 *	-1000 <= nums[i] <= 1000
 */

// 1:	0
// 2:	0
// 3:	1	1(3)
// 4:	3	1(4) + 2(3)
// 5:	6	1(5) + 2(4) + 3(3)
// 6:	10	1(6) + 2(5) + 3(4) + 4(6)
// 7:	15	1(7) + 2(6) + 3(5) + 4(4) + 5(3)
// 8:	21	1(8) + 2(7) + 3(6) + 4(5) + 5(4) + 6(3)
// 9:	28	1(9) + 2(8) + 3(7) + 4(6) + 5(5) + 6(4) + 7(3)

#include <iostream>
#include <vector>

using namespace std;

int numberOfArithmeticSlices(vector<int>& nums) {
	if (nums.size() == 1 || nums.size() == 2)
		return 0;
	
	int result = 0;

	size_t i = 0;
	
	while (i < nums.size()) {
		int diff = nums[i + 1] - nums[i];
		int counter = 1;
		i++;

		while (i + 1 < nums.size() && nums[i + 1] - nums[i] == diff) {
			counter++;
			i++;
		}

		if (counter > 1) {
			int sum = 0;

			for (int j = 1; j < counter; j++)
				sum += j;

			result += sum;
		}
		
		if (i == nums.size() - 1)
			i++;
	}

	return result;
}

int main(void) {
	vector<int> n0 = {1, 2, 3, 4};

	cout << "n0 = {1, 2, 3, 4};" << endl;
	cout << "result 0: " << numberOfArithmeticSlices(n0) << '\n' << endl;

	vector<int> n1 = {1};

	cout << "n1[] = {1}" << endl;
	cout << "result 1: " << numberOfArithmeticSlices(n1) << '\n' << endl;

	vector<int> n2 = {1, 2, 3, 4, 6};

	cout << "n2[] = {1, 2, 3, 4, 6}" << endl;
	cout << "result 2: " << numberOfArithmeticSlices(n2) << '\n' << endl;

	vector<int> n3 = {1, 2, 3, 4, 6, 8, 10};

	cout << "n3[] = {1, 2, 3, 4, 6, 8, 10}" << endl;
	cout << "result 3: " << numberOfArithmeticSlices(n3) << '\n' << endl;

	vector<int> n4 = {1, 2, 3, 4, 6, 8, 10, 11, 13, 15};

	cout << "n4[] = {1, 2, 3, 4, 6, 8, 10, 11, 13, 15}" << endl;
	cout << "result 4: " << numberOfArithmeticSlices(n4) << '\n' << endl;

}
