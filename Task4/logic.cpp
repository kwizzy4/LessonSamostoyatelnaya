#include <iostream>
#include "logic.h"

void printNumbersInOrder(int N, int M) {
	cout << "Program result: ";
	if (N < M) {
		for (int i = N; i <= M; i++) {
			cout << i;
			if (i < M) {
				cout << " ";
			}
		}
	}
	else {
		for (int i = N; i >= M; i--) {
			cout << i;
			if (i > M) {
				cout << " ";
			}
		}
	}
	cout << "\n";
}