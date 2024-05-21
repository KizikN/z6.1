#include<iostream>
#include"ElipseColor.h"
#include"Base.h"
#include"Elipse.h"

using namespace std;

void Elipse::Print()
{
	cout << "Elipse:" << endl;
	Base::Print();
	ElipseColor::Print();
}