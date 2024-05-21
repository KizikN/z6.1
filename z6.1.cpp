#include<iostream>
#include"Base.h"
#include"Color.h"
#include"ElipseColor.h"
#include"Button.h"
#include"Elipse.h"
#include"TextBox.h"
#include"HyperlinkLabel.h"

using namespace std;

int main()
{
	Button B;
	TextBox T;
	Elipse E;
	HyperlinkLabel H;
	B.Change_Size(2, 3);
	char a[6]{ "Hello" };
	B.Change_ToolTipText(a);
	cout << B << endl;
	/*cout << T << endl;
	cout << E << endl;
	cout << H << endl;*/
	return 0;
}