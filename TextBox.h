#pragma once
#include"Text.h"
#include"Color.h"
#include"Base.h"
#include<iostream>

class TextBox : public  Text
{
protected:
	Color T;
	bool Readonly = false;
public:
	TextBox() : Text(){}
	void Print() override;
	int Get_Color_R() { return T.R; }
	int Get_Color_G() { return T.G; }
	int Get_Color_B() { return T.B; }
	void Change_Color_R(unsigned int a) 
	{
		if (a > 0 && a <= 256)
		T.R = a; 
	}
	void Change_Color_G(unsigned int a) 
	{ 
		if (a > 0 && a <= 256)
		T.G = a; 
	}
	void Change_Color_B(unsigned int a) 
	{
		if (a > 0 && a <= 256)
		T.B = a; 
	}
	bool Get_Readonly() { return Readonly; }
	void Change_Readonly(bool a) { Readonly = a; }
	friend std::ostream& operator <<(std::ostream& os, TextBox& V) { V.Print(); return os;}
};