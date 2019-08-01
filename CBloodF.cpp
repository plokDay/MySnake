#include<iostream>
#include<time.h>
#include "CBloodF.h"
#include "data.h"
#include"ui.h"
using std::cout;
CBloodF::CBloodF() {};
void CBloodF::RandB()
{
	if (g_nBlood > 10 || gIsNewBlood == false)
	{
		return;
	}
	
	srand((unsigned int)time(NULL));
	while (1) {
		nX = 3 + rand() % 62;
		nY = 4 + rand() % 33;
		if (g_aMap[nX][nY] == BLANK || g_aMap[nX][nY] == ICE)
		{
			g_aMap[nX][nY] = BLOODF;

			gotoxy(nX, nY);
			setcolor(12); cout << char(3);
			break;
		}
	}
	gIsNewBlood=false;
}