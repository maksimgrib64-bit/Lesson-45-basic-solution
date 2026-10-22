#include "logic.h"
bool linear_search(int* array, int size, int value) {
	for (int i = 0; i < size; i++) {
		if (array[i] == value) {
			return true;
		}
	}
	return false;
}

int find_first_index(int* array, int size, int value) {
	for (int i = 0; i < size; i++) {
		if (array[i] == value) {
			return i;
		}
	}
	return -1;
}

int find_last_index(int* array, int size, int value) {
	for (int i = size - 1; i >= 0; i--) {
		if (array[i] == value) {
			return i;
		}
	}
	return -1;
}

int count(int* array, int size, int value) {
	int counter = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] == value) {
			counter++;
		}
	}
	return counter;
}
