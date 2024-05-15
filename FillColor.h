#pragma once

class FillColor : public Color
{
public:
	void Change_Fill_Color() { Color::Change_Color(); }
	virtual void operator <<(FillColor L)
	{
		std::cout << "Fill color:\n";
		std::cout << "Red: " << Get_R() << std::endl;
		std::cout << "Green: " << Get_G() << std::endl;
		std::cout << "Blue: " << Get_B() << std::endl;
	}
};