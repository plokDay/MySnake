#include "CFood.h"
#include <time.h>
#include "ui.h"
#include "data.h"
CFood::CFood() {};
void CFood::RandF()
{
	if (gIsNewFood <5)
	{
		srand((unsigned int)time(NULL));
		while (1)
		{
			nX = 4 + rand() % 68;
			nY = 2 + rand() % 30;
			if (g_aMap[nX][nY] == BLANK || g_aMap[nX][nY] == ICE)
			{
				g_aMap[nX][nY] = FOOD;

				gotoxy(nX, nY);
				setcolor(13); cout << "¡ñ";
				break;
			}
		}
		gIsNewFood++;
	}
}