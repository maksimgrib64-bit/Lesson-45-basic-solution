#include "util.h"
void print(string text) {
	cout << text << endl;
}

string convert(int* array, int size) {
	string s = to_string(array[0]);
	for (int i = 1; i < size; i++) {

		s += " " + to_string(array[i]);
	}


	return s;
}

void init_random(int* array, int size, int begin, int end) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % (end - begin + 1) + begin;
	}
}

void init_user(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
}
