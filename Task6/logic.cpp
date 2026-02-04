#include "logic.h"

long long get_fibo_number(int index) {
	if (index < 0) {
		return -1;
	}
	if (index == 0) {
		return 0;
	}
	if (index == 1) {
		return 1;
	}
	long long prev1 = 0;
	long long prev2 = 1;
	long long current = 0;

	for (int i = 2; i <= index; i++) {
		current = prev1 + prev2;
		prev1 = prev2;
		prev2 = current;
	}
	return current;
}