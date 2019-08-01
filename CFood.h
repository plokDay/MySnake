#pragma once
#include<iostream>
#include <stdlib.h>
#include<vector>

using std::vector;
using std::cout;

class CFood
{
public:
	CFood();
	void RandF();//小于5的时候就随机生成
	
public:
	int nX, nY;//食物坐标

};
