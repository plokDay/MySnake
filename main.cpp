#include<iostream>
#include<stdlib.h>
#include <windows.h>
#include<AccCtrl.h>
#include <time.h>
#include <conio.h>
#include <memory.h>
#include "ui.h"
#include "data.h"
#include"CMap.h"
#include "CBloodF.h"
#include "CSnake.h"
#include "CFood.h"
#include "file.h"

int main()
{
	system("color fc");
	system("title 贪吃蛇");
	system("mode con cols=150 lines=48");
	
	Menu();
	system("pause");
	return 0;
}