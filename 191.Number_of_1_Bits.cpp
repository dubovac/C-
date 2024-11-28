/**
 * 191. Number of 1 Bits
 * Easy
 * Topics
 * Companies
 *
 * Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).
 *
 *
 *
 * Example 1:
 *
 *	Input: n = 11
 *	Output: 3
 *	Explanation:
 *	The input binary string 1011 has a total of three set bits.
 *
 * Example 2:
 *
 *	Input: n = 128
 *	Output: 1
 *	Explanation:
 *	The input binary string 10000000 has a total of one set bit.
 *
 * Example 3:
 *
 *	Input: n = 2147483645
 *	Output: 30
 *	Explanation:
 *	The input binary string 1111111111111111111111111111101 has a total of thirty set bits.
 *
 *
 *
 * Constraints:
 *
 *	1 <= n <= 231 - 1
 *
 *
 * Follow up: If this function is called many times, how would you optimize it?
 */

#include <iostream>

using namespace std;

int hammingWeight(int n) {
	int result = 0;

	while (n != 0) {
		if (n % 2 == 1)
			result++;
		n /= 2;
	}

	return result;
}

int main(void) {
	int n = 11;
	cout <<"n = " << n << "\tresult = " << hammingWeight(n) << endl;

	n = 128;
	cout <<"n = " << n << "\tresult = " << hammingWeight(n) << endl;

	n = 2147483645;
	cout <<"n = " << n << "\tresult = " << hammingWeight(n) << endl;
}
