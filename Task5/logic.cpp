#include "logic.h"
#include <cmath>

bool is_digits_count_even(long long number) {
	if (number == 0) {
		return false;
	}
	long long num = llabs(number);

	int count = 0;
	while (num > 0) {
		count++;
		num /= 10;
	}
	return (count % 2) == 0;
}