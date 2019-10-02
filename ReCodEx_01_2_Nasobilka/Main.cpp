
#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{

	//cout << "argc = " << argc << endl;

	for (int i = 1; i < argc; i++)
	{
		int val = atoi(argv[i]);
		cout << "Nasobilka " << val << ":" << endl;
		for (int q = 1; q <= 10; q++)
		{
			cout << q << " * " << val << " = " << val * q << endl;
		}
	}
}