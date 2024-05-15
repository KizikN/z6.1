#pragma once

class URL
{
	char* U_R_L = nullptr;
public:
	URL()
	{
		U_R_L= new char[25];
		std::cout << "Enter an URL:\n";
		std::cin.ignore();
		std::cin.getline(U_R_L, 25);
	}

	void Change_URL()
	{
		std::cout << "Enter an URL:\n";
		std::cin.ignore();
		std::cin.getline(U_R_L, 25);
	}

	virtual void operator <<(URL L)
	{
		std::cout << "URL:\n";
		for (int i = 0; U_R_L[i] != '\0'; i++)
			std::cout << U_R_L[i];
		std::cout << std::endl;
	}

	char* Get_U_R_L() { return U_R_L; }
};