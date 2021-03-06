#include <iostream>
#include <Windows.h>
#include "Math.h"

using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Math X1;
	X1.Read();
	X1.Display();
	X1.Dodavannya();
	X1.Vidnimannya();
	X1.Mnojennya();
}