#pragma once

class Math {
private:
	int a1, a2, b1, b2;
public:
    int Geta1() { return a1; }
    int Geta2() { return a2; }
    int Getb1() { return b1; }
    int Getb2() { return b2; }
    void Seta1(int value) { a1 = value; }
	void Seta2(int value) { a2 = value; }
	void Setb1(int value) { b1 = value; }
	void Setb2(int value) { b2 = value; }

	bool Init(int a1, int a2, int b1, int b2);
	void Display();
	void Read();

	int Dodavannya();
	int Vidnimannya();
	int Mnojennya();

};