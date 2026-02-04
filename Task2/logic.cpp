#include "logic.h"
#include <iostream>

void getAndPrintOddNumbersDescending(int N, int M) {
	cout << "Result: ";

	int current = M - ((M % 2) == 0);

	bool first = true;

	while (current >= N) {
		if (!first) {
			cout << " ";
		}
		cout << current;
		current -= 2;
		first = false;
	}
	cout << "\n";
}