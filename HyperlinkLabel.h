#pragma once

class HyperlinkLabel: public Text, public Color, public Visible, public Coordinates, public Size, public URL
{
	HyperlinkLabel():Text(), Color(), Visible(), Coordinates(), Size(), URL() {}
	void operator << (HyperlinkLabel L)
	{
		if (Get_Visibility())
			std::cout << "Element is visible.\n";
		else
			std::cout << "Element is invisible.\n";

		std::cout << "x = " << Get_X() << "\ny = " << Get_Y() << std::endl;

		std::cout << "Length: " << Get_Length() << "\nWidth: " << Get_Width() << std::endl;

		char* h = Text::Get_Text();
		std::cout << "Text:\n";
		for (int i = 0; h[i] != '\0'; i++)
			std::cout << h[i];
		std::cout << "\n";

		h = Get_U_R_L();
		std::cout << "URL:\n";
		for (int i = 0; h[i] != '\0'; i++)
			std::cout << h[i];
		std::cout << "\n";

		std::cout << "Color:\n";
		std::cout << "Red: " << Get_R() << std::endl;
		std::cout << "Green: " << Get_G() << std::endl;
		std::cout << "Blue: " << Get_B() << std::endl;
	}

	void Change_HyperlinkLabel()
	{
		bool k = true;
		while (k)
		{
			std::cout << "What would you like to change?\n(1 - Text, 2 - Color, 3 - Visibility, 4 - Coordinates, 5 - Size, 6 - URL)";
			int fg = 0;
			std::cin >> fg;
			switch (fg)
			{
			case 1:
				Change_Text();
				break;
			case 2:
				Change_Color();
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
			case 6:
				Change_URL();
				break;
			default:
				break;
			}

			std::cout << "Would you like to change somthing else?\n(0 - false, 1 - true)";
			std::cin >> k;
		}
	}
};