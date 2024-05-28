#pragma once
#include<iostream>

class Base
{
protected:
	unsigned int x = 0, y = 0;
	unsigned int Length = 0, Width = 0;
	bool check = true;
public:
	void Change_Coordinates(unsigned int a, unsigned int b) 
	{
		if (a > 0 && a <= 1920 && b > 0 && b <= 1080)
		{
			x = a;
			y = b;
		}
		else
			std::cout << "Error\n";
	}
	virtual void Print();
	void Change_Size(unsigned int a, unsigned int b) 
	{ 
		if (a > 0 && a <= 1920 && b > 0 && b <= 1080)
		{
			Length = a; Width = b;
		}
		else
			std::cout << "Error\n";
	}
	void Change_Visibility(bool ch) { check = ch; }
	unsigned int Get_X() { return x; }
	unsigned int Get_Y() { return y; }
	unsigned int Get_Length() { return Length; }
	unsigned int Get_Width() { return Width; }
};