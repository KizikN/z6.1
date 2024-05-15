#pragma once


class Size
{
	unsigned int Length = 0, Width = 0;
public:
	void Change_Size(unsigned int a, unsigned int b) { Length = a; Width = b; }
	void Change_Size(unsigned int a, bool ch)
	{
		if (ch)
			Length = a;
		else
			Width = a;
	}
	
	virtual void operator <<(Size L)
	{
		std::cout << "Length: " << Length << "\nWidth: " << Width << std::endl;
	}

	unsigned int Get_Length() { return Length; }
	unsigned int Get_Width() { return Width; }
};