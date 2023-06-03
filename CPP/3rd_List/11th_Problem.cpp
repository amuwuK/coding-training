#include <iostream>
using namespace std;

int main() {
	float resultFloat, remainder, a;
	int b, resultInt;

	do {
		cout << "\nType 0 in both numbers to end the program.";
		cout << "\nType in the first number: ";
		cin >> a;

		cout << "\nType in the second number: ";
		cin >> b;

		resultInt = a / b;
		resultFloat = a / b;
		remainder = (resultFloat - resultInt) * b;

		cout << "\nThe remainder of the division between "<< a << " and "<< b << " is: " << remainder << endl;
	} while (a != 0 && b != 0);

	cout << "\n\tEND OF PROGRAM\n\t";
}