#include "pch.h"

#define init_() clock_t __time__mark__
#define start_() __time__mark__=clock()
#define get_time_diff() (clock()-__time__mark__)

using namespace BigInt;


int main() {
	init_();
	Bigint a(100000);
	start_();
	auto && temp = fact(a);
	cout << get_time_diff() << endl;
	cout << fact(a) << endl;
	//system("pause");
	return 0;
}

