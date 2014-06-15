#include <iostream>
#include "Complex.h"
#include <string>
using namespace std;

int main() {
	double num1, num1_2, num2, num2_2;
	Complex complex1;

	cout << "Please enter the first complex number: ";
	cin >> num1;
	cout << " ";
	cin >> num1_2;
	cout << "\nPlease enter the second complex number: ";
	cin >> num2;
	cout << " ";
	cin >> num2_2;
	cout << endl << "(" << num1 << " + " << num1_2 << "i) + (" << num2 << " + " << num2_2 << "i) = " << complex1.add(num1, num1_2, num2, num2_2) << endl;
	cout << endl << "(" << num1 << " + " << num1_2 << "i) - (" << num2 << " + " << num2_2 << "i) = " << complex1.subtract(num1, num1_2, num2, num2_2) << endl;
	cout << endl << "(" << num1 << " + " << num1_2 << "i) * (" << num2 << " + " << num2_2 << "i) = " << complex1.multiply(num1, num1_2, num2, num2_2) << endl;
	cout << endl << "(" << num1 << " + " << num1_2 << "i) / (" << num2 << " + " << num2_2 << "i) = " << complex1.divide(num1, num1_2, num2, num2_2) << endl;
	cout << endl << "|" << num1 << " + " << num1_2 << "i| = " << complex1.abs(num1, num1_2) << endl;

	return 0;
}