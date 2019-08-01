#include <windows.h>
#include "ui.h"
#include "CMap.h"

CMap::CMap()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WEIGHT; j++)
		{
			if ((i == 0 && j != 0) || (i == HEIGHT - 1 && j != 0) || (i == 39 && j != 0) || (i == 40 && j == 20)
				|| (i == 40 && j == 40) || j == 1 || j == WEIGHT - 1)
			{
				g_aMap[j][i] = BORDER;
			}
			else
			{
				g_aMap[j][i] = BLANK;
			}
		}
		cout << "\n";
	}
}
void CMap::DrawMap()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WEIGHT; j++)
		{
			if (g_aMap[j][i] == BORDER)
			{
				gotoxy(j, i);
				setcolor(2); cout << "▓";
			}
			else if (g_aMap[j][i] == WALL)
			{
				gotoxy(j, i);
				if (i % 2 == 0)setcolor(10);
				else if (i % 3 == 0)setcolor(14);
				else if (i % 5 == 0 || i % 7 == 0)setcolor(11);
				else setcolor(3); cout << "▇";
			}
			else if (g_aMap[j][i] == ICE)
			{
				gotoxy(j, i);
				setcolor(9); cout << "※";
			}
			else if (g_aMap[j][i] == FOOD)
			{
				gotoxy(j, i);
				setcolor(13); cout << "●";
			}
			else if (g_aMap[j][i] == SNAKEH)
			{
				gotoxy(j, i);
				setcolor(4); cout << "◆";
			}
			else if (g_aMap[j][i] == SNAKE)
			{
				gotoxy(j, i);
				setcolor(12); cout << "●";
			}
			else if (g_aMap[j][i] == BLOODF)
			{
				gotoxy(j, i);
				setcolor(12); cout << char(3);
			}
		}
		cout << "\n";  
	}
}
//打印菜单的时候重载
void CMap::DrawMap(int i)
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WEIGHT; j++)
		{
			if (g_aMap[j][i] == BORDER)
			{
				gotoxy(j, i);
				setcolor(2); cout << "▓";
			}
			else if (g_aMap[j][i] == WALL)
			{
				gotoxy(j, i);
				if (i % 2 == 0)setcolor(10);
				else if (i % 3 == 0)setcolor(14);
				else if (i % 5 == 0||i%7==0)setcolor(11);
				else setcolor(3); cout << "▇";
			}
			else if (g_aMap[j][i] == ICE)
			{
				gotoxy(j, i);
				setcolor(9); cout << "※";
			}
			else if (g_aMap[j][i] == FOOD)
			{
				gotoxy(j, i);
				setcolor(13); cout << "●";
			}
			else if (g_aMap[j][i] == SNAKEH)
			{
				gotoxy(j, i);
				setcolor(4); cout << "◆";
			}
			else if (g_aMap[j][i] == SNAKE)
			{
				gotoxy(j, i);
				setcolor(12); cout << "●";
			}
			else if (g_aMap[j][i] == BLOODF)
			{
				gotoxy(j, i);
				setcolor(12); cout << char(3);
			}
		}
		cout << "\n";  Sleep(20);
	}
}
