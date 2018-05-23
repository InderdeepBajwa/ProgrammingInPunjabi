#include <iostream>
#include <string>

using namespace std;

double addNumbers(double a, double b); // Function declaration, or function prototype

int main() {

	cout << "Adding 22323 + 4232323 = " << addNumbers(22323, 4232323) << endl;

	cin.get();
	return 0;
}

double addNumbers(double a, double b) {
	return a / b;
}
