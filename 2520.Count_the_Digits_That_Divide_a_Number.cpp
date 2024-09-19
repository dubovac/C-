/**
 * 2520. Count the Digits That Divide a Number
 * Easy
 * Topics
 * Companies
 * Hint
 *
 * Given an integer num, return the number of digits in num that divide num.
 *
 * An integer val divides nums if nums % val == 0.
 *
 *
 *
 * Example 1:
 *
 *	Input: num = 7
 *	Output: 1
 *	Explanation: 7 divides itself, hence the answer is 1.
 *
 * Example 2:
 *
 *	Input: num = 121
 *	Output: 2
 *	Explanation: 121 is divisible by 1, but not 2.
 *	Since 1 occurs twice as a digit, we return 2.
 *
 * Example 3:
 *
 *	Input: num = 1248
 *	Output: 4
 *	Explanation: 1248 is divisible by all of its digits, hence the answer is 4.
 *
 *
 *
 * Constraints:
 *
 *	1 <= num <= 109
 *	num does not contain 0 as one of its digits.
 */
#include <iostream>

using namespace std;

int countDigits(int num) {
	int temp = num;
	int counter = 0;
	int val;

	while (temp) {
		val = temp % 10;
		temp /= 10;

		if (val != 0 && num % val == 0)
			counter++;
	}

	return counter;
}

int main(void) {
	int n = 7;
	cout << "num = " << n << endl;
	cout << countDigits(n) << '\n' << endl;

	n = 121;
	cout << "num = " << n << endl;
	cout << countDigits(n) << '\n' << endl;

	n = 1248;
	cout << "num = " << n << endl;
	cout << countDigits(n) << '\n' << endl;
}
