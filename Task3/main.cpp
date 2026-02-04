#include <iostream>
#include "logic.h"

int main() {
	int number;

	cout << "Input number: ";
	cin >> number;

	if (is_power_of_two(number)) {
		cout << "Number " << number << " is a power of two\n";
	}
	else {
		cout << "Number " << number << " is NOT a power of two\n";
	}
	return 0;
}