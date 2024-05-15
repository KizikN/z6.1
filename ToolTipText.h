#pragma once

class ToolTipText: public Text
{
public:
	ToolTipText():Text(){}
	void ChangeToolTipText() { Text::Change_Text(); }
	char* Get_ToolTipText() { return Get_Text(); }
	virtual void operator <<(ToolTipText L) 
	{ 
		std::cout << "Tool Tip Text:\n";
		char* G = Get_Text();
		for (int i = 0; G[i] != '\0'; i++)
			std::cout << G[i];
		std::cout << std::endl;
	}
};