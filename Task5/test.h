#include <iostream>
#include "logic.h"

void runTests() {
	cout << "Run tests...";

	cout << "Test 1 (1111): " << is_digits_count_even(1111);
	cout << " " << (is_digits_count_even(1111) ? "Yes" : "No") << "\n";

	cout << "Test 2 (11111): " << is_digits_count_even(11111);
	cout << " " << (is_digits_count_even(11111) ? "Yes" : "No") << "\n";

	cout << "Test 3 (-1234): " << is_digits_count_even(-1234);
	cout << " " << (is_digits_count_even(-1234) ? "Yes" : "No") << "\n";

	cout << "Test 4 (-12345): " << is_digits_count_even(-12345);
	cout << " " << (is_digits_count_even(-12345) ? "Yes" : "No") << "\n";

	cout << "Test 5 (0): " << is_digits_count_even(0);
	cout << " " << (is_digits_count_even(0) ? "Yes" : "No") << "\n";

	cout << "Test 6 (7): " << is_digits_count_even(7);
	cout << " " << (is_digits_count_even(7) ? "Yes" : "No") << "\n";

	cout << "Test 7 (42): " << is_digits_count_even(42);
	cout << " " << (is_digits_count_even(42) ? "Yes" : "No") << "\n";

	cout << "Testing ended.\n";
}