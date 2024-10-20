/**
 * 387. First Unique Character in a String
 * Easy
 * Topics
 * Companies
 *
 * Given a string s, find the first non-repeating character in it and return its index.
 * If it does not exist, return -1.
 *
 *
 *
 * Example 1:
 *
 *	Input: s = "leetcode"
 *	Output: 0
 *	Explanation:
 *	The character 'l' at index 0 is the first character that does not occur at any other index.
 *
 * Example 2:
 *
 *	Input: s = "loveleetcode"
 *	Output: 2
 *
 * Example 3:
 *
 *	Input: s = "aabb"
 *	Output: -1
 *
 *
 *
 * Constraints:
 *
 *	1 <= s.length <= 10^5
 *	s consists of only lowercase English letters.
 */

#include <iostream>
#include <string>

using namespace std;

int firstUniqChar(string s) {
	int t[26] = {0};

	for (size_t i = 0; i < s.size(); i++)
		t[s[i] - 'a']++;

	for (size_t i = 0; i < s.size(); i++)
		if (t[s[i] - 'a'] == 1)
			return i;

	return -1;
}

int main(void) {
	string s0 = "leetcode";
	cout << firstUniqChar(s0) << endl;

	string s1 = "loveleetcode";
	cout << firstUniqChar(s1) << endl;

	string s2 = "aabb";
	cout << firstUniqChar(s2) << endl;
}
