/**
 * 54. Spiral Matrix
 * Medium
 * Topics
 * Companies
 * Hint
 *
 * Given an m x n matrix, return all elements of the matrix in spiral order.
 *
 *
 *
 * Example 1:
 *
 *	1 → 2 → 3
 *		↓
 *	4 → 5   6
 *	↑	↓
 *	7 ← 8 ← 9
 *
 *	Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
 *	Output: [1,2,3,6,9,8,7,4,5]
 *
 * Example 2:
 *
 *	1 →  2 →  3 →  4
 *		       ↓
 *	5 →  6 →  7    8
 *	↑	       ↓
 *	9 ← 10 ← 11 ← 12
 *
 *	Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
 *	Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 *
 *
 *
 * Constraints:
 *
 *	m == matrix.length
 *	n == matrix[i].length
 *	1 <= m, n <= 10
 *	-100 <= matrix[i][j] <= 100
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
	int size = matrix.size() * matrix[0].size();
	vector<int> result(size);

	int left = 0;
	int right = matrix[0].size();
	int top = 0;
	int bottom = matrix.size();

	int k = 0;

	while(1) {
		for (int j = left; j < right; j++) {
			result[k++] = matrix[top][j];
			if (k == size)
				break;
		}

		if (k == size)
			break;

		for (int i = top + 1; i < bottom; i++) {
			result[k++] = matrix[i][right - 1];
			if (k == size)
				break;
		}

		if (k == size)
			break;

		for (int j = right - 2; j >= left; j--) {
			result[k++] = matrix[bottom - 1][j];
			if (k == size)
				break;
		}

		if (k == size)
			break;

		for (int i = bottom - 2; i > top; i--) {
			result[k++] = matrix[i][left];
			if (k == size)
				break;
		}

		if (k == size)
			break;

		left++;
		right--;
		top++;
		bottom--;
	}

	return result;
		
}
int main(void) {
	vector<vector<int>> m0 {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	vector<int> r0 = spiralOrder(m0);

	for (size_t i = 0; i < r0.size(); i++)
		cout << r0[i] << ' ';

	cout << endl;

//-----------------------------------------------------------------------------------

	vector<vector<int>> m1 {
		{ 1,  2,  3,  4},
		{ 5,  6,  7,  8},
		{ 9, 10, 11, 12},
		{13, 14, 15, 16}
	};

	vector<int> r1 = spiralOrder(m1);

	for (size_t i = 0; i < r1.size(); i++)
		cout << r1[i] << ' ';

	cout << endl;

//-----------------------------------------------------------------------------------

	vector<vector<int>> m2 {
		{ 1,  2,  3,  4,  5,  6,  7,  8},
		{ 9, 10, 11, 12, 13, 14, 15, 16},
		{17, 18, 19, 20, 21, 22, 23, 24},
		{25, 26, 27, 28, 29, 30, 31, 32},
		{33, 34, 35, 36, 37, 38, 39, 40}
	};

	vector<int> r2 = spiralOrder(m2);

	for (size_t i = 0; i < r2.size(); i++)
		cout << r2[i] << ' ';

	cout << endl;
}
