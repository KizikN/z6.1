#pragma once

class Text
{
	char* text = nullptr;
public:
	Text()
	{
		text = new char[50];
		std::cout << "Enter a text:\n";
		/*std::cin.ignore();*/
		std::cin.getline(text, 50);
	}

	void Change_Text()
	{
		std::cout << "Enter a text:\n";
		std::cin.ignore();
		std::cin.getline(text, 50);
	}

	virtual void operator <<(Text L)
	{
		std::cout << "Text:\n";
		for (int i = 0; text[i] != '\0'; i++)
			std::cout << text[i];
		std::cout << std::endl;
	}

	char* Get_Text() { return text; }
};