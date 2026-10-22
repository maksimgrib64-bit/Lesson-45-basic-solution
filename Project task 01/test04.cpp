#include "util.h"
#include "Windows.h"

int main() {

	time_t start = time(NULL);
	Sleep(5000);
	time_t finish = time(NULL);

	long long total_time = finish - start;
	int second = total_time % 60;
	int minute = total_time / 60 % 60;
	int hour = total_time / 3600 % 24;
																																													


	return 0;
}