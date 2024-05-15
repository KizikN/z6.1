#pragma once

class Visible
{
	bool check = true;
public:
	void Change_Visibility(bool ch) { check = ch; }

	virtual void operator <<(Visible L)
	{
		if (check)
			std::cout << "Element is visible.\n";
		else
			std::cout << "Element is invisible.\n";
	}

	bool Get_Visibility() { return check; }
};