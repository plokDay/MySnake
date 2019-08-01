#pragma once
#include<iostream>
#include<windows.h>
#include<vector>

using std::vector;

class CSnake
{
public:
	CSnake();
	void IniS();	//随机初始化蛇的三个结点
	void DrawS();	//画蛇
	void Collision();	//碰撞检测
	void MoveS();	//移动
	
public:
	vector<COORD> m_snake;//蛇的位置
	int m_nDir;	//方向
	bool m_isAlive;	//是否存活
private:
	
};
