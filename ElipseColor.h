#pragma once
#include"Color.h"

class ElipseColor
{
protected:
	Color Fill;
	Color Border;
public:
	virtual void Print();

	unsigned int Get_Fill_R() { return Fill.R; }
	unsigned int Get_Fill_G() { return Fill.G; }
	unsigned int Get_Fill_B() { return Fill.B; }
	unsigned int Get_Border_R() { return Border.R; }
	unsigned int Get_Border_G() { return Border.G; }
	unsigned int Get_Border_B() { return Border.B; }

	void Change_Fill_R(unsigned int a) 
	{
		if(a > 0 && a <= 256)
		Fill.R = a; 
	}
	void Change_Fill_G(unsigned int a) 
	{
		if (a > 0 && a <= 256)
			Fill.G = a; 
	}
	void Change_Fill_B(unsigned int a) 
	{
		if (a > 0 && a <= 256)
		Fill.B = a; 
	}
	void Change_Border_R(unsigned int a) 
	{
		if (a > 0 && a <= 256)
		Border.R = a; 
	}
	void Change_Border_G(unsigned int a) 
	{
		if (a > 0 && a <= 256)
		Border.G = a; 
	}
	void Change_Border_B(unsigned int a) 
	{
		if (a > 0 && a <= 256)
		Border.B = a; 
	}
};