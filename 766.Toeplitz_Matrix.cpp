/**
 * 766. Toeplitz Matrix
 * Easy
 * Topics
 * Companies
 * Hint
 *
 * Given an m x n matrix, return true if the matrix is Toeplitz.
 * Otherwise, return false.
 *
 * A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.
 *
 *
 *
 * Example 1:
 *
 * 	1	2	3	4
 *
 * 	5	1	2	3
 *
 * 	9	5	1	2
 *
 *	Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
 *	Output: true
 *	Explanation:
 *	In the above grid, the diagonals are:
 *	"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
 *	In each diagonal all elements are the same, so the answer is True.
 *
 * Example 2:
 *
 * 	1	2
 *
 * 	2	2
 *
 *	Input: matrix = [[1,2],[2,2]]
 *	Output: false
 *	Explanation:
 *	The diagonal "[1, 2]" has different elements.
 *
 *
 *
 * Constraints:
 *
 *	m == matrix.length
 *	n == matrix[i].length
 *	1 <= m, n <= 20
 *	0 <= matrix[i][j] <= 99
 *
 *
 *
 * Follow up:
 *
 *	What if the matrix is stored on disk, and the memory is limited such that you can only load at most one row of the matrix into the memory at once?
 *	What if the matrix is so large that you can only load up a partial row into the memory at once?
 */
#include <iostream>
#include <vector>
#include <cstdbool>

using namespace std;
bool isToeplitzMatrix(vector<vector<int>>& matrix) {
	if (matrix.size() == 1 || matrix[0].size() == 1)
		return true;

	for (size_t i = 0; i < matrix[0].size() - 1; i++) {
		size_t j = 1;

		while (j < matrix.size() && i + j < matrix[0].size()) {
			if (matrix[j][i + j] != matrix[j - 1][i + j - 1])
				return false;
			j++;
		}
	}

	for (size_t k = 1; k < matrix.size() - 1; k++) {
		size_t l = 1;

		while (k + l < matrix.size() && l < matrix[0].size()) {
			if (matrix[k + l][l] != matrix[k + l - 1][l - 1])
				return false;
			l++;
		}
	}

	return true;
}

int main(void) {

/*
 * vector<vector<int> > matrix(RR);
 * for (int i = 0; i < RR; i++)
 * 	matrix[i].resize(CC);
*/
	vector<vector<int> > m = {
				  {1, 2, 3, 4},
				  {5, 1, 2, 3},
				  {9, 5, 1, 2}
				 };

	cout << (isToeplitzMatrix(m) ? "True" : "False") << endl;
}
