/**
 * 567. Permutation in String
 * Medium
 * Topics
 * Companies
 * Hint
 *
 * Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
 *
 * In other words, return true if one of s1's permutations is the substring of s2.
 *
 *
 *
 * Example 1:
 *
 *	Input: s1 = "ab", s2 = "eidbaooo"
 *	Output: true
 *	Explanation: s2 contains one permutation of s1 ("ba").
 *
 * Example 2:
 *
 *	Input: s1 = "ab", s2 = "eidboaoo"
 *	Output: false
 *
 *
 *
 * Constraints:
 *
 *	1 <= s1.length, s2.length <= 10^4
 *	s1 and s2 consist of lowercase English letters.
 */

#include <iostream>
#include <string>
#include <cstdbool>

using namespace std;

bool checkInclusion(string s1, string s2) {
	int l1 = s1.size();
	int l2 = s2.size();

	if (l1 == 0)
		return true;

	if (l1 > l2)
		return false;

	int t1[26] = {0};

	for (int i = 0; i < l1; i++)
		t1[s1[i] - 'a']++;

	for (int i = 0; i < l2 - l1 + 1; i++) {
		int t2[26] = {0};

		for (int j = 0; j < l1; j++)
			t2[s2[i + j] - 'a']++;

		int t = 1;
		
		for (int j = 0; j < 26; j++)
			if (t1[j] != t2[j]) {
				t = 0;
				break;
			}

		if (t)
			return true;
	}
	
	return false;
}

int main(void) {
 	string s01 = "ab";
	string s02 = "eidbaooo";
	cout << (checkInclusion(s01, s02) ? "True" : "False") << endl;

	string s11 = "ab";
	string s12 = "eidboaoo";
	cout << (checkInclusion(s11, s12) ? "True" : "False") << endl;

	string s21 = "adc";
	string s22 = "dcda";
	cout << (checkInclusion(s21, s22) ? "True" : "False") << endl;
}
