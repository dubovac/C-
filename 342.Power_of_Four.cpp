/**
 * 342. Power of Four
 * Easy
 * Topics
 * Companies
 *
 * Given an integer n, return true if it is a power of four.
 * Otherwise, return false.
 *
 * An integer n is a power of four, if there exists an integer x such that n == 4x.
 *
 *
 *
 * Example 1:
 *
 * 	Input: n = 16
 * 	Output: true
 *
 * Example 2:
 *
 * 	Input: n = 5
 * 	Output: false
 *
 * Example 3:
 *
 * 	Input: n = 1
 * 	Output: true
 *
 *
 *
 * Constraints:
 *
 * 	-231 <= n <= 231 - 1
 *
 *
 * Follow up: Could you solve it without loops/recursion?
 */

#include <iostream>
#include <cmath>
#include <cstdbool>

using namespace std;

bool isPowerOfFour(int n) {
	if (n <= 0)
		return false;
	return ((int) (log(n) / log(4)) == log(n) / log(4)) ? true : false;
}

int main(void) {
	int n = 16;
	cout << (isPowerOfFour(n) ? "True" : "False") << endl;

	n = 5;
	cout << (isPowerOfFour(n) ? "True" : "False") << endl;
}
