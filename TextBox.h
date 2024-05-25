#pragma once
#include"Text.h"
#include"Color.h"
#include"Base.h"
#include<iostream>

class TextBox : public  Text, public Base
{
protected:
	Color T;
	bool Readonly = false;
public:
	TextBox() : Text(), Base(){}
	void Print() override;
	int Get_Color_R() { return T.R; }
	int Get_Color_G() { return T.G; }
	int Get_Color_B() { return T.B; }
	void Change_Color_R(unsigned int a) { T.R = a; }
	void Change_Color_G(unsigned int a) { T.G = a; }
	void Change_Color_B(unsigned int a) { T.B = a; }
	bool Get_Readonly() { return Readonly; }
	void Change_Readonly(bool a) { Readonly = a; }
	friend std::ostream& operator <<(std::ostream& os, TextBox& V) { V.Print(); return os;}
};