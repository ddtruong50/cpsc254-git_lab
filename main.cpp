#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string output;
	fstream f;
	f.open("contents.txt");
	while (!f.eof())
	{
		f >> output;
		cout << output;
	}
	return 0;
}

