#pragma once

class Base
{
protected:
	unsigned int x = 0, y = 0;
	unsigned int Length = 0, Width = 0;
	bool check = true;
public:
	void Change_Coordinates(unsigned int a, unsigned int b) { x = a; y = b; }
	virtual void Print();
	void Change_Size(unsigned int a, unsigned int b) { Length = a; Width = b; }
	void Change_Visibility(bool ch) { check = ch; }
	unsigned int Get_X() { return x; }
	unsigned int Get_Y() { return y; }
	unsigned int Get_Length() { return Length; }
	unsigned int Get_Width() { return Width; }
};