#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

int main ()
{
	time_t rawtime;
	struct tm * ptm;

	time(&rawtime);

	ptm = gmtime(&rawtime);

	cout << "The UTC time is " << ptm << endl;
	return 0;
}

