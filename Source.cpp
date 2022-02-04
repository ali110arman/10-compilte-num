#include <iostream>
#include <conio.h>
using namespace std;
void main() {
	int num, num2;
	cout << "inter your number" << endl;
	cin >> num;
	num2 = sqrt(num);
	if (pow(num2, 2) == num) {
		cout << "your number is complete" << endl;
	}
	else {
		cout << "your number is not complete" << endl;
	}
}
