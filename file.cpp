#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "CMap.h"
#include "file.h"
#include "data.h"  
#include "ui.h"

using std::cout;
using std::cin;

void SaveIni()
{
	FILE *pFile = nullptr;

	//1.打开
	if (fopen_s(&pFile, "IniInfo", "wb+"))
		printf("失败\n");
	//写入
	fwrite(g_defauleMapName, 50, 1, pFile);
	fwrite(g_SaveName1, 50, 1, pFile);
	//fwrite(g_SaveName2, 50, 1, pFile);
	
	//3.关闭
	fclose(pFile);
}
void ReadIni()
{
	FILE *pFile = nullptr;
	//1.打开
	if (fopen_s(&pFile, "IniInfo", "ab+"))
		printf("失败\n");
	//写入
	fread(g_defauleMapName, 50, 1, pFile);
	fread(g_SaveName1, 50, 1, pFile);
	//fread(g_SaveName2, 50, 1, pFile);
	
	//3.关闭
	fclose(pFile);
	if (fopen_s(&pFile, "map4", "ab+"))
		printf("失败\n");
	fread(g_aMap, 4 * HEIGHT*WEIGHT, 1, pFile);
	fclose(pFile);
}
void SaveMap(int(*m_map)[HEIGHT],char *m_mapName)
{
	FILE *pFile = nullptr;

	//1.打开
	if (fopen_s(&pFile, m_mapName, "wb+"))
		printf("失败\n");
	//写入
	
	fwrite(m_map, 4 * HEIGHT*WEIGHT, 1, pFile);
	//3.关闭
	fclose(pFile);
}


void ReadMap(int(*m_map)[HEIGHT], const char *m_mapName)
{
	FILE *pFile = nullptr;
	//1.打开
	if (fopen_s(&pFile, m_mapName, "rb+"))
		printf("失败\n");
	//写入
	fread(m_map, 4 * HEIGHT*WEIGHT, 1, pFile);
	//3.关闭
	fclose(pFile);
}
void SaveGame(pGAMESAVE g_sav,char * name, char * oldname)
{
	//将全局变量分别都存到结构体的成员里面
	g_sav->gIsNewFood=gIsNewFood;
	g_sav->gIsNewBlood = gIsNewBlood;
	g_sav->gIsPause = gIsPause;
	memcpy(g_sav->g_aMap, g_aMap, 4 * HEIGHT*WEIGHT);
	g_sav->g_nSpeed = g_nSpeed;
	g_sav->g_nScore = g_nScore;
	g_sav->g_nBlood = g_nBlood;
	g_sav->g_nNormalSpeed = g_nNormalSpeed;
	g_sav->g_nFastSpeed = g_nFastSpeed;
	g_sav->g_len= g_len;
	FILE *pFile = nullptr;
	//1.打开
	if (fopen_s(&pFile, name, "wb+"))
		printf("失败\n");
	//将原来的存档删除
	remove(oldname);
	//写入存档内容
	fwrite(g_sav, sizeof(GAMESAVE), 1, pFile);
	//写入蛇类坐标vector
	for (int i=0;i<g_snake.size();i++)
	{
		fwrite(&g_snake[i], sizeof(COORD), 1, pFile);
	}
	//3.关闭
	fclose(pFile);
	SaveIni();
}
void OpenGame(char * saveName)
{
	int i = 0;
	
	FILE *pFile = nullptr;
	//1.打开
	if (fopen_s(&pFile, saveName, "rb+"))
		printf("失败\n");
	//读取
	fread(g_save, sizeof(GAMESAVE), 1, pFile);
	//读取vector
	/*while(!feof(pFile))
	{
		fread(&g_tmp[i], sizeof(COORD), 1, pFile);
		i++;
	}*/
	int n=g_save->g_len;
	for (int i=0;i<n;i++)
	{
		fread(&g_tmp[i], sizeof(COORD), 1, pFile);
	}

	//3.关闭
	fclose(pFile);

	gIsNewFood=g_save->gIsNewFood ;
	gIsNewBlood=g_save->gIsNewBlood;
	gIsPause=g_save->gIsPause;
	g_nNormalSpeed = g_save->g_nNormalSpeed;
	g_nFastSpeed = g_save->g_nFastSpeed;
	g_nSpeed=g_save->g_nSpeed;
	g_nScore=g_save->g_nScore;
	g_nBlood=g_save->g_nBlood;
	g_len = n;
	//读档开始游戏
	Start(1);
	
}