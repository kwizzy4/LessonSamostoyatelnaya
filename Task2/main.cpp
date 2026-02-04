#include <iostream>
#include "logic.h"
#include "test.h"

int main() {
	runTests();

	int N, M;

	cout << "Input two numbers N and M (M > N): ";
	cin >> N >> M;
	if (M <= N) {
		cout << "Error! M must be > than N!\n";
		return 1;
	}

	getAndPrintOddNumbersDescending(N, M);

	return 0;
}