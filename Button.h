#pragma once
#include"Base.h"
#include"ToolTipText.h"
#include<iostream>

class Button:public ToolTipText
{
public:
	Button():ToolTipText(){}
	void Print() override;
	friend std::ostream& operator <<(std::ostream& os, Button& V) { V.Print(); return os; }
};