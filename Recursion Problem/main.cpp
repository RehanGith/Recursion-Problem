#include <iostream>

using namespace std;
int sum(int num) {
	if (num == 1)
		return num;
	return sum(num - 1) + num;
}
int factorial(int num) {
	if (num <= 1)
		return 1;
	return factorial(num - 1) * num;
}
int power(int num, int exp) {
	if (exp <= 1)
		return num;
	return power(num, exp-1) * num;
}

int main() {
	cout << sum(4) << endl;
	return 0;
}