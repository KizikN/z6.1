#include"Base.h"
#include"ToolTipText.h"
#include"Button.h"
#include<iostream>

using namespace std;

void Button::Print()
{
	cout << "Button:" << endl;
	Base::Print();
	ToolTipText::Print();
}