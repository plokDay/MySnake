#pragma once  
#include "data.h"
void gotoxy(short nX, short nY);//光标定位
void setcolor(int foreColor = 0, int backcolor = 15);//设置颜色
void Menu();//打印主菜单
void GameInfo();//打印游戏界面上的提示信息
void Start(int(*m_map)[HEIGHT], const char * music);//开始新游戏，不同的地图不同的背景音乐
void Paint(int(*m_map)[HEIGHT],char *m_mapName);//编辑与应用地图
void SelectMap();//选择地图界面
void Start(int i);//读档开始游戏时重载
void SelectGame();//选择存档界面
void Selectdiff();//选择难度
void LoadingMenu();//加载菜单的动画