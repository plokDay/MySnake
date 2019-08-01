#pragma once
#include "data.h"

void SaveIni();//保存初始化信息，游戏存档，默认地图的文件名
void ReadIni();//读取初始化信息
void SaveMap(int(*m_map)[HEIGHT], char *m_mapName);//保存地图
void ReadMap(int(*m_map)[HEIGHT], const char *m_mapName);//读取选中的地图
void SaveGame(pGAMESAVE g_sav, char * name,char * oldname);//保存游戏
void OpenGame(char * saveName);//读取游戏存档并开始游戏
