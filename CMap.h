#pragma once
#include<iostream>
#include "CFood.h"
#include "CSnake.h"
#include "CBloodF.h"
#include "data.h"

class CMap
{
public:
	CMap();
	void DrawMap();//画地图
	void DrawMap(int i);//画菜单界面时重载
	
public:
	int m_aMap[HEIGHT][WEIGHT];
	CFood m_fd;//加分食物
	CBloodF m_blood;//加血食物
	CSnake m_sna;//蛇
};
