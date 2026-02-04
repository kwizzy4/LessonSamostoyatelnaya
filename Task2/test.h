#include <iostream>
#include "logic.h"

void runTests() {
	cout << "Run Tests...\n";

	cout << "Test 1 (N=5, M=15):\n";
	cout << "Waiting: 15 13 11 9 7 5\n";
	cout << "Received: ";
	getAndPrintOddNumbersDescending(5, 15);
	cout << "\n";

	cout << "Test 2 (N=62, M=77):\n";
	cout << "Waiting: 77 76 73 71 69\n";
	cout << "Received: ";
	getAndPrintOddNumbersDescending(62, 77);
	cout << "\n";

	cout << "Test 3 (N=-2, M=8):\n";
	cout << "Waiting: 7 5 3 1 -1\n";
	cout << "Received: ";
	getAndPrintOddNumbersDescending(-2, 8);
	cout << "\n";

	cout << "Test 4 (N=13, M=13):\n";
	cout << "Waiting: 13\n";
	cout << "Received: ";
	getAndPrintOddNumbersDescending(13, 13);
	cout << "\n";

	cout << "Test 5 (N=4, M=4):\n";
	cout << "Waiting: 4\n";
	cout << "Received: ";
	getAndPrintOddNumbersDescending(4, 4);
	cout << "\n";

	cout << "Testing ended.\n";
}