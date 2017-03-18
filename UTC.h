#include <iostream>
#include <time.h>
#include <ctime>

int main ()
{
	time_t rawtime;
	struct tm * ptm;

	time(&rawtime);

	ptm = gmtime(&rawtime);

	std::cout << "The UTC time is " << ptm << std::endl;
}

