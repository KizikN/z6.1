#pragma once

class Coordinates
{
	unsigned int x = 0, y = 0;
public:
	void Change_Coordinates(unsigned int a, unsigned int b) { x = a; y = b; }
	void Change_Coordinates(unsigned int a, bool ch)
	{
		if (ch)
			x = a;
		else
			y = a;
	}

	virtual void operator <<(Coordinates L)
	{
		std::cout << "x = " << x << "\ny = " << y << std::endl;
	}

	unsigned int Get_X() { return x; }
	unsigned int Get_Y() { return y; }
};