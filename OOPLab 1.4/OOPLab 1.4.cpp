#include <iostream>
#include <Windows.h>
#include "Math.h"

using namespace std;

bool Math::Init(int a_a1, int a_a2, int b_b1, int b_b2)
{
	a1 = a_a1;
	a2 = a_a2;
	b1 = b_b1;
	b2 = b_b2;
	return 0;
}

void Math::Read()
{
	int a1, a2, b1, b2;
	do {
		cout << "Введіть першу частину першого комплексного числа =";cin >> a1;
		cout << "Введіть другу частину першого комплексного числа =";cin >> b1;
		cout << "Введіть першу частину другого комплексного числа =";cin >> a2;
		cout << "Введіть другу частину другого комплексного числа =";cin >> b2
			;
	} while (Init(a1, a2, b1, b2));
}
void Math::Display()
{
	cout << "Перше комплексне число = " << Geta1()<<"+"<<Getb1()<<"i" << endl;
	cout << "Друге комплексне число = " << Geta2()<<"+"<<Getb2()<<"i" << endl;
}
int Math::Dodavannya()
{
	int D1 = 0;
	int D2 = 0;
	D1 = a1 + a2;
	D2 = b1 + b2;
	cout << "Додавання комплексних чисел = " << D1 << "+" << D2<<"i" << endl;

	return 0;
}
int Math::Vidnimannya()
{
	int V1 = 0;
	int V2 = 0;
	V1 = a1 - a2;
	V2 = b1 - b2;
	cout << "Віднімання комплексних чисел = " << V1 << "+" << V2 << "i" << endl;

	return 0;
}
int Math::Mnojennya()
{
	int M1 = 0;
	int M2 = 0;
	M1 = a1 * a2 - b1 * b2;
	M2 = a1 * b2 + b1 * a2;
	cout << "Множення комплексних чисел = " << M1 << "+" << M2 << "i" << endl;

	return 0;
}