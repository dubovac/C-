/**
 * 344. Reverse String
 * Easy
 * Topics
 * Companies
 * Hint
 *
 * Write a function that reverses a string.
 * The input string is given as an array of characters s.
 *
 * You must do this by modifying the input array in-place with O(1) extra memory.
 *
 *
 *
 * Example 1:
 *
 * 	Input: s = ["h","e","l","l","o"]
 * 	Output: ["o","l","l","e","h"]
 *
 * Example 2:
 *
 * 	Input: s = ["H","a","n","n","a","h"]
 * 	Output: ["h","a","n","n","a","H"]
 *
 *
 *
 * Constraints:
 *
 * 	1 <= s.length <= 105
 * 	s[i] is a printable ascii character.
 */

#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) {
	for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
		s[i] ^= s[j];
		s[j] ^= s[i];
		s[i] ^= s[j];
	}
}

int main(void) {
	vector<char> s{'h', 'e', 'l', 'l', 'o'};

	for (char i: s)
		cout << i;
	cout << endl;

	reverseString(s);

	for (char i: s)
		cout << i;
	cout << endl;
}
