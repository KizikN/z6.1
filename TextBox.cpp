#include"Text.h"
#include"Color.h"
#include"Base.h"
#include"TextBox.h"
#include<iostream>

using namespace std;

void TextBox::Print()
{
	cout << "TextBox:" << endl;
	Base::Print();
	Text::Print();
	cout << "Color:\n";
	cout << "Red: " << T.R << std::endl;
	cout << "Green: " << T.G << std::endl;
	cout << "Blue: " << T.B << std::endl;
}