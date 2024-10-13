/**
 * 383. Ransom Note
 * Easy
 * Topics
 * Companies
 *
 * Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
 *
 * Each letter in magazine can only be used once in ransomNote.
 *
 *
 *
 * Example 1:
 *
 *	Input: ransomNote = "a", magazine = "b"
 *	Output: false
 *
 * Example 2:
 *
 *	Input: ransomNote = "aa", magazine = "ab"
 *	Output: false
 *
 * Example 3:
 *
 *	Input: ransomNote = "aa", magazine = "aab"
 *	Output: true
 *
 *
 *
 * Constraints:
 *
 *	1 <= ransomNote.length, magazine.length <= 10^5
 *	ransomNote and magazine consist of lowercase English letters.
 */

#include <iostream>
#include <cstdbool>
#include <string>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
	int rN[26] = {0};
	int m[26] = {0};

	for (size_t i = 0; i < ransomNote.size(); i++)
		rN[ransomNote[i] - 'a']++;


	for (size_t i = 0; i < magazine.size(); i++)
		m[magazine[i] - 'a']++;



	for (int i = 0; i < 26; i++)
		if (rN[i] != 0 && rN[i] > m[i])
			return false;
	
	return true;
}

int main(void) {
	string ransomNote0 = "a";
	string magazine0 = "b";
	cout << (canConstruct(ransomNote0, magazine0) ? "True" : "False") << endl;

	string ransomNote1 = "aa";
	string magazine1 = "ab";
	cout << (canConstruct(ransomNote1, magazine1) ? "True" : "False") << endl;

	string ransomNote2 = "aa";
	string magazine2 = "aab";
	cout << (canConstruct(ransomNote2, magazine2) ? "True" : "False") << endl;

	string ransomNote3 = "bg";
	string magazine3 = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj"; 
	cout << (canConstruct(ransomNote3, magazine3) ? "True" : "False") << endl;
}
