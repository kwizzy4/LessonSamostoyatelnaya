#include <iostream>
#include "logic.h"

void runTests() {
	cout << "Run Tests...\n";

	int result1 = calculateLikes(5, 7);
	cout << "Test1(5 likes 7 days): " << result1 << " - " << (result1 == 35 ? "Yes" : "No") << "\n";

	int result2 = calculateLikes(10, 1);
	cout << "Test2(10 likes 1 days): " << result2 << " - " << (result2 == 10 ? "Yes" : "No") << "\n";

	int result3 = calculateLikes(5, 0);
	cout << "Test3(5 likes 0 days): " << result3 << " - " << (result3 == 0 ? "Yes" : "No") << "\n";

	int result4 = calculateLikes(100, 30);
	cout << "Test4(100 likes 30 days): " << result4 << " - " << (result4 == 3000 ? "Yes" : "No") << "\n";

	cout << "Testing ended.\n";
}