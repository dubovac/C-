/**
 * 1207. Unique Number of Occurrences
 * Easy
 * Topics
 * Companies
 * Hint
 *
 * Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
 *
 *
 *
 * Example 1:
 *
 *	Input: arr = [1,2,2,1,1,3]
 *	Output: true
 *	Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1.
 *	No two values have the same number of occurrences.
 *
 * Example 2:
 *
 *	Input: arr = [1,2]
 *	Output: false
 *
 * Example 3:
 *
 *	Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
 *	Output: true
 *
 *
 *
 * Constraints:
 *
 *	1 <= arr.length <= 1000
 *	-1000 <= arr[i] <= 1000
 */
#include <iostream>
#include <cstdbool>
#include <vector>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
	int max = -1001;
	int min = 1001;

	for (size_t i = 0; i < arr.size(); i++) {
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}

	int size = max - min + 1;
	int temp[size];

	for (int i = 0; i < size; i++)
		temp[i] = 0;


	for (size_t i = 0; i < arr.size(); i++)
		temp[arr[i] - min]++;

	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (temp[i] != 0 && temp[j] != 0 && temp[i] == temp[j])
				return false;
	return true;
}

int main(void) {
	vector<int> a0 = {1, 2, 2, 1, 1, 3};
	cout << (uniqueOccurrences(a0) ? "True" : "False") << endl;

	vector<int> a1 = {1, 2};
	cout << (uniqueOccurrences(a1) ? "True" : "False") << endl;

	vector<int> a2 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
	cout << (uniqueOccurrences(a2) ? "True" : "False") << endl;

}
