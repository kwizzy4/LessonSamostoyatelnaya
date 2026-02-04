#include "logic.h"

int calculateLikes(int initialLikes, int days) {
	if (days <= 0) {
		return 0;
	}
	return initialLikes * days;
}
void printDailyLikes(int initialLikes, int days) {
	for (int day = 1; day <= days; day++) {
		int dailyLikes = calculateLikes(initialLikes, day);
		cout << "Day " << day << ": " << dailyLikes << " likes\n";
	}
}