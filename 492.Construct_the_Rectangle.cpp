/**
 * 492. Construct the Rectangle
 * Easy
 * Topics
 * Companies
 * Hint
 *
 * A web developer needs to know how to design a web page's size.
 * So, given a specific rectangular web page’s area, your job by now is to design a rectangular web page, whose length L and width W satisfy the following requirements:
 *
 * 	The area of the rectangular web page you designed must equal to the given target area.
 * 	The width W should not be larger than the length L, which means L >= W.
 * 	The difference between length L and width W should be as small as possible.
 *
 * Return an array [L, W] where L and W are the length and width of the web page you designed in sequence.
 *
 *
 *
 * Example 1:
 *
 * 	Input: area = 4
 * 	Output: [2,2]
 * 	Explanation: The target area is 4, and all the possible ways to construct it are [1,4], [2,2], [4,1].
 * 	But according to requirement 2, [1,4] is illegal; according to requirement 3,  [4,1] is not optimal compared to [2,2].
 * 	So the length L is 2, and the width W is 2.
 *
 * Example 2:
 *
 * 	Input: area = 37
 * 	Output: [37,1]
 *
 * Example 3:
 *
 * 	Input: area = 122122
 * 	Output: [427,286]
 *
 *
 *
 * Constraints:
 *
 * 	1 <= area <= 10^7
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> constructRectangle(int area) {
	vector<int> result({0, 0});

	int length = area;
	int width = 1;
	int l = area;
	
	while (l > width) {
		if (area % l == 0) {
			width = area / l;
			length = l;
		}
		l--;
	}
	result[0] = length;
	result[1] = width;

	return result;
}

int main(void) {
	int a0 = 4;
	vector<int> r0 = constructRectangle(a0);
	cout << "area[0] = " << a0 << endl;
	cout << "length[0] = " << r0[0] << '\t' << "width[0] = " << r0[1] << '\n' << endl;

	int a1 = 37;
	vector<int> r1 = constructRectangle(a1);
	cout << "area[1] = " << a1 << endl;
	cout << "length[1] = " << r1[0] << '\t' << "width[1] = " << r1[1] << '\n' << endl;

	int a2 = 122122;
	vector<int> r2 = constructRectangle(a2);
	cout << "area[2] = " << a2 << endl;
	cout << "length[2] = " << r2[0] << '\t' << "width[2] = " << r2[1] << '\n' << endl;

	int a3 = 40000;
	vector<int> r3 = constructRectangle(a3);
	cout << "area[3] = " << a3 << endl;
	cout << "length[3] = " << r3[0] << '\t' << "width[3] = " << r3[1] << '\n' << endl;
}
