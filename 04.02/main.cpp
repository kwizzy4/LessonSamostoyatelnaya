#include "logic.h"
#include "test.h"
#include <iostream>

int main() {
	runTests();

	int initialLikes, days;

	cout << "Input amount of likes: ";
	cin >> initialLikes;

	cout << "Input amount of days: ";
	cin >> days;

	cout << "\nResult:\n";
	printDailyLikes(initialLikes, days);

	return 0;
}