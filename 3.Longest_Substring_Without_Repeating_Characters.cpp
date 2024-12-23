/**
 * 3. Longest Substring Without Repeating Characters
 * Medium
 * Topics
 * Companies
 * Hint
 *
 * Given a string s, find the length of the longest substring without repeating characters.
 *
 *
 *
 * Example 1:
 *
 *	Input: s = "abcabcbb"
 *	Output: 3
 *	Explanation: The answer is "abc", with the length of 3.
 *
 * Example 2:
 *
 *	Input: s = "bbbbb"
 *	Output: 1
 *	Explanation: The answer is "b", with the length of 1.
 *
 * Example 3:
 *
 *	Input: s = "pwwkew"
 *	Output: 3
 *	Explanation: The answer is "wke", with the length of 3.
 *	Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 *
 *
 *
 * Constraints:
 *
 *	0 <= s.length <= 5 * 10^4
 *	s consists of English letters, digits, symbols and spaces.
 */

#include <iostream>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) {
	int max = 0;

	for (size_t i = 0; i < s.size(); i++) {
		int ascii[128] = {0};
		int len = 0;

		for (size_t j = i; j < s.size(); j++) {
			if (ascii[(int) s[j]] == 0) {
				len++;
				ascii[(int) s[j]]++;
			}
			else
				break;			
		}
		
		if (len > max)
			max = len;
	}

	return max;
}

int main(void) {
	string s0 = "abcabcbb";
	cout << (lengthOfLongestSubstring(s0)) << endl;

	string s1 = "bbbbb";
	cout << (lengthOfLongestSubstring(s1)) << endl;

	string s2 = "pwwkew";
	cout << (lengthOfLongestSubstring(s2)) << endl;
}
