#pragma once

class Color
{
	__int8 R = 0;
	__int8 G = 0;
	__int8 B = 0;
public:
	__int8 Get_R() { return R; }
	__int8 Get_G() { return G; }
	__int8 Get_B() { return B; }

	void Change_Color()
	{
		std::cout << "Enter red: ";
		std::cin >> R;
		std::cout << "Enter green: ";
		std::cin >> G;
		std::cout << "Enter blue: ";
		std::cin >> B;
	}
	
	virtual void operator <<(Color L)
	{
		std::cout << "Color:\n";
		std::cout << "Red: " << R << std::endl;
		std::cout << "Green: " << G << std::endl;
		std::cout << "Blue: " << B << std::endl;
	}
};