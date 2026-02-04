#include <iostream>
#include "logic.h"
#include "test.h"

int main() {
	runTests();

	int index;

	cout << "Enter the ordinal number of the Fibonacci number: ";
	cin >> index;

	long long result = get_fibo_number(index);

	if (result == -1) {
		cout << "Error! Invalid serial number.\n";
	}
	else {
		cout << "Fibonacci number with number " << index << " = " << result << "\n";
	}

	return 0;
}