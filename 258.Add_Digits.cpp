#include <iostream>

using namespace std;

int addDigits(int num) {
	if (num > 9)
		while (num > 9) {
			int sum = 0;
			while (num != 0) {
				sum += num % 10;
				num /= 10;
			}
			num = sum;
		}

	return num;
}

int main(void) {
	int x = 2147483647;

	cout << addDigits(x) << endl;
}
