
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void Draw(int Length, int Pos);

int main(int argc, char* argv[])
{
	const int Size = 40;

	while (true)
	{
		for (int i = 0; i < Size; i++)
		{
			Draw(Size, i);
			std::this_thread::sleep_for(20ms);
		}
		for (int i = Size - 1; i >= 0; i--)
		{
			Draw(Size, i);
			std::this_thread::sleep_for(20ms);
		}
	}
}

void Draw(int Length, int Pos)
{
	cout << "\r";
	for (int i = 0; i < Length; i++)
	{
		if (Pos != i)
			cout << ".";
		else
			cout << "*";		
	}
}