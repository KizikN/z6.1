#pragma once

class ReadOnly
{
	bool Read_Only = true;
public:
	void Change_Read_Only(bool ch) { Read_Only = ch; }
	
	virtual void operator <<(ReadOnly L)
	{
		if (Read_Only)
			std::cout << "Element can only be read.\n";
		else
			std::cout << "Element can be changed.\n";
	}

	bool Get_ReadOnly() { return Read_Only; }
};