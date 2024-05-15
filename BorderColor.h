#pragma once

class BorderColor: public Color
{
public:
		void Change_Borde_Color() { Color::Change_Color(); }
		virtual void operator <<(BorderColor L) 
		{
			std::cout << "Border color:\n";
			std::cout << "Red: " << Get_R() << std::endl;
			std::cout << "Green: " << Get_G() << std::endl;
			std::cout << "Blue: " << Get_B() << std::endl;
		}
};