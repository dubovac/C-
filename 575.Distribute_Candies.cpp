/**
 * 575. Distribute Candies
 * Easy
 * Topics
 * Companies
 * Hint
 *
 * Alice has n candies, where the ith candy is of type candyType[i]
 * Alice noticed that she started to gain weight, so she visited a doctor.
 *
 * The doctor advised Alice to only eat n / 2 of the candies she has (n is always even).
 * Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice.
 *
 * Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.
 *
 *
 *
 * Example 1:
 *
 *	Input: candyType = [1,1,2,2,3,3]
 *	Output: 3
 *	Explanation: Alice can only eat 6 / 2 = 3 candies.
 *	Since there are only 3 types, she can eat one of each type.
 *
 * Example 2:
 *
 *	Input: candyType = [1,1,2,3]
 *	Output: 2
 *	Explanation: Alice can only eat 4 / 2 = 2 candies.
 *	Whether she eats types [1,2], [1,3], or [2,3], she still can only eat 2 different types.
 *
 * Example 3:
 *
 *	Input: candyType = [6,6,6,6]
 *	Output: 1
 *	Explanation: Alice can only eat 4 / 2 = 2 candies.
 *	Even though she can eat 2 candies, she only has 1 type.
 *
 *
 *
 * Constraints:
 *
 *	n == candyType.length
 *	2 <= n <= 104
 *	n is even.
 *	-10^5 <= candyType[i] <= 10^5
 */

#include <iostream>
#include <vector>

using namespace std;

int distributeCandies(vector<int>& candyType) {
	int size = candyType.size() / 2;
	int differentCandies[size];

	int n = 0;

	for (size_t i = 0; i < candyType.size(); i++) {
		int test = 1;

		for (int j = 0; j < n; j++)
		if (candyType[i] == differentCandies[j]) {
			test = 0;
			break;
		}

		if (test) {
			differentCandies[n] = candyType[i];
			n++;
		}

		if (n == size)
			return size;
	}

	return n;
}

int main(void) {
	vector<int> cT0 = {1, 1, 2, 2, 3, 3};
	cout << distributeCandies(cT0) << endl;

	vector<int> cT1 = {1, 1, 2, 3};
	cout << distributeCandies(cT1) << endl;

	vector<int> cT2 = {6, 6, 6, 6};
	cout << distributeCandies(cT2) << endl;
}
