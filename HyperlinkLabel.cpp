#include"Base.h"
#include"URL.h"
#include"Text.h"
#include"Color.h"
#include<iostream>
#include"HyperlinkLabel.h"

using namespace std;

void HyperlinkLabel::Print()
{
	cout << "HyperlinkLabel:" << endl;
	Base::Print();
	URL::Print();
	cout << "Color:\n";
	cout << "Red: " << H.R << std::endl;
	cout << "Green: " << H.G << std::endl;
	cout << "Blue: " << H.B << std::endl;
}