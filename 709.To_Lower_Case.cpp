/**
 * 709. To Lower Case
 * Easy
 * Topics
 * Companies
 * Hint
 *
 * Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
 *
 *
 *
 * Example 1:
 *
 * 	Input: s = "Hello"
 * 	Output: "hello"
 *
 * Example 2:
 *
 * 	Input: s = "here"
 * 	Output: "here"
 *
 * Example 3:
 *
 * 	Input: s = "LOVELY"
 * 	Output: "lovely"
 *
 *
 *
 * Constraints:
 *
 * 	1 <= s.length <= 100
 * 	s consists of printable ASCII characters.
 */
#include <iostream>

using namespace std;

string toLowerCase(string s) {
	for (size_t i = 0; i < s.length(); i++)
		if ('A' <= s[i] && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 'a';
		else
			s[i] = s[i];

	return s;
}

int main(void) {
	string s = "Hello World!";

	cout << toLowerCase(s) << endl;
}