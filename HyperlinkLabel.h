#pragma once
#include"Base.h"
#include"URL.h"
#include"Text.h"
#include"Color.h"
#include<iostream>


class HyperlinkLabel:public URL
{
protected:
	Color H;
public:
	HyperlinkLabel() :URL(){}
	void Print() override;
	int Get_Color_R(){ return H.R; }
	int Get_Color_G() { return H.G; }
	int Get_Color_B() { return H.B; }
	void Change_Color_R(unsigned int a) 
	{
		if (a > 0 && a <= 256)
		H.R = a; 
	}
	void Change_Color_G(unsigned int a) 
	{
		if (a > 0 && a <= 256)
		H.G = a;
	}
	void Change_Color_B(unsigned int a) 
	{ 
		if (a > 0 && a <= 256)
		H.B = a; 
	}
	friend std::ostream& operator <<(std::ostream& os, HyperlinkLabel& V) { V.Print(); return os;}
};

