#include "buttonSearch.h"
#include "menu.h"



search::search()
{
	system("cls");
	Button *but;
	but = new Button[2];
	but[0] = Button(Point(30, 15), "", 40, 1);
	but[1] = Button(Point(40, 19), "Enter", 20, 1);
	console::gotoxy(30, 15);
	string str;
	getline(cin, str);

	int b= 0;
	bool isPressed = false;

	// xu li 
	while (true)
	{
		if (_kbhit()){// Nhan biet mot phim bat ki khi nguoi dung nhap vao
			switch (_getch()){ // save phim do lai de xu ly
			case 13: // vertical tab
				isPressed = true;
				break;
			case 9: // TAB
				//if (but[b].stateButton())//neu dang bat thi tat
				//    but[b].condition_of_button();
				if (b == 0)
					b = 1;
				else
				{
					b = 0;
					break;
				}		
			}
			if (!but[b].stateButton())
				but[b].condition_of_button();
			if (isPressed)
				break;
		}
	}


}
search::~search(){}