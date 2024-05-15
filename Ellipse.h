#pragma once

class Elliepse: public Visible, public FillColor, public BorderColor, public Coordinates, public Size
{
	Elliepse():Visible(), FillColor(), BorderColor(), Coordinates(), Size() {}
	void operator <<(Elliepse L)
	{
		if (Get_Visibility())
			std::cout << "Element is visible.\n";
		else
			std::cout << "Element is invisible.\n";

		std::cout << "x = " << Get_X() << "\ny = " << Get_Y() << std::endl;

		std::cout << "Length: " << Get_Length() << "\nWidth: " << Get_Width() << std::endl;

		std::cout << "Fill color:\n";
		std::cout << "Red: " << FillColor::Get_R() << std::endl;
		std::cout << "Green: " << FillColor::Get_G() << std::endl;
		std::cout << "Blue: " << FillColor::Get_B() << std::endl;

		std::cout << "Border color:\n";
		std::cout << "Red: " << BorderColor::Get_R() << std::endl;
		std::cout << "Green: " << BorderColor::Get_G() << std::endl;
		std::cout << "Blue: " << BorderColor::Get_B() << std::endl;
	}

	void Change_Elliepse()
	{
		bool k = true;
		while (k)
		{
			std::cout << "What would you like to change?\n(1 - FillColor, 2 - BorderColor, 3 - Visibility, 4 - Coordinates, 5 - Size)";
			int fg = 0;
			std::cin >> fg;
			switch (fg)
			{
			case 1:
				Change_Borde_Color();
				break;
			case 2:
				Change_Fill_Color();
				break;
			case 3:
				std::cout << "Invisible - 0, Visible - 1";
				bool f;
				std::cin >> f;
				Change_Visibility(f);
				break;
			case 4:
				unsigned int x1, y1;
				std::cout << "Enter x: ";
				std::cin >> x1;
				std::cout << "Enter y: ";
				std::cin >> y1;
				Change_Coordinates(x1, y1);
				break;
			case 5:
				unsigned int a1, b1;
				std::cout << "Enter length: ";
				std::cin >> a1;
				std::cout << "Enter widthe: ";
				std::cin >> b1;
				Change_Size(a1, b1);
				break;
			default:
				break;
			}

			std::cout << "Would you like to change somthing else?\n(0 - false, 1 - true)";
			std::cin >> k;
		}
	}
};