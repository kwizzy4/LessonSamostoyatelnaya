#include <iostream>
#include "logic.h"

int main() {
	long long number;

	cout << "Input number: ";
	cin >> number;

	if (is_digits_count_even(number)) {
		cout << "Number " << number << " contains an EVEN number of numbers\n";
	}
	else {
		cout << "Number " << number << " contains an ODD number of numbers\n";
	}

	return 0;
}