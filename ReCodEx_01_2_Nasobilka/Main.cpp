
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Main.h"


int main(int argc, const char* argv[])
{
	vector<string> nums(argv+1, argv + argc);

	WriteTables(nums);

	return 0;
}

void WriteTables(const vector<string>& arg)
{
	for (auto&& a : arg)
	{
		int val = stoi(a);
		cout << "Nasobilka " << val << ":" << endl;
		WriteTab(val);
	}
}

void WriteTab(int value)
{
	for (int q = 1; q <= 10; q++)
	{
		cout << q << " * " << value << " = " << value * q << endl;
	}
}