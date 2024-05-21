#include<iostream>
#include"Base.h"

using namespace std;


void Base::Print()
{
	std::cout << "x = " << x << "\ny = " << y << std::endl;
	std::cout << "Length: " << Length << "\nWidth: " << Width << std::endl;
	if (check)
		std::cout << "Element is visible.\n";
	else
		std::cout << "Element is invisible.\n";
}