#include <iostream>
#include "logic.h"

void runTests() {
	cout << "Start Fibonacci testing...";

	cout << "Test 1 (index = 0): " << get_fibo_number(0);
	cout << " " << (get_fibo_number(0) == 0 ? "Yes" : "No") << "\n";

	cout << "Test 2 (index = 1): " << get_fibo_number(1);
	cout << " " << (get_fibo_number(1) == 0 ? "Yes" : "No") << "\n";

	cout << "Test 3 (index = 2): " << get_fibo_number(2);
	cout << " " << (get_fibo_number(2) == 0 ? "Yes" : "No") << "\n";

	cout << "Test 4 (index = 3): " << get_fibo_number(3);
	cout << " " << (get_fibo_number(3) == 0 ? "Yes" : "No") << "\n";

	cout << "Test 5 (index = 4): " << get_fibo_number(4);
	cout << " " << (get_fibo_number(4) == 0 ? "Yes" : "No") << "\n";

	cout << "Test 6 (index = 8): " << get_fibo_number(8);
	cout << " " << (get_fibo_number(8) == 0 ? "Yes" : "No") << "\n";

	cout << "Test 7 (index = 9): " << get_fibo_number(9);
	cout << " " << (get_fibo_number(9) == 0 ? "Yes" : "No") << "\n";

	cout << "Test 8 (index = 10): " << get_fibo_number(10);
	cout << " " << (get_fibo_number(10) == 0 ? "Yes" : "No") << "\n";

	cout << "Test 9 (index = -1): " << get_fibo_number(-1);
	cout << " " << (get_fibo_number(-1) == 0 ? "Yes" : "No") << "\n";

	cout << "Test 10 (index = 20): " << get_fibo_number(20);
	cout << " " << (get_fibo_number(20) == 0 ? "Yes" : "No") << "\n";

	cout << "Testing ended.\n";
}