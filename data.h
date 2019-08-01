#pragma once
#include<string>
#include<vector>
#include<windows.h>
using std::vector;
using std::string;

#define BORDER 1
#define BLANK 2
#define FOOD 3
#define SNAKE 4
#define WALL 5
#define ICE 6
#define BLOODF 7
#define SNAKEH 8
#define WEIGHT 74
#define HEIGHT 42

#define WEST 1
#define EAST -1
#define SOUTH 2
#define NORTH -2
extern int gIsNewFood;
extern bool gIsNewBlood;
extern int gIsPause;
extern int g_aMap[WEIGHT][HEIGHT];
extern vector<COORD> g_snake;
extern int g_nSpeed;
extern int g_nFastSpeed;
extern int g_nNormalSpeed;
extern int g_nScore;
extern int g_nBlood ;
extern int g_len;
extern COORD g_tmp[100];
//地图
extern int g_aNewMap1[WEIGHT][HEIGHT];
extern int g_aNewMap2[WEIGHT][HEIGHT];
extern int g_aNewMap3[WEIGHT][HEIGHT];


extern char g_defauleMapName[50];//默认地图文件名
//地图文件名
extern char g_sNamwMap1[50];
extern char g_sNamwMap2[50];
extern char g_sNamwMap3[50];
//存档文件名
extern char g_SaveName1[50];
//extern char g_SaveName2[50];

//用来存档用的结构体类型，存储全局变量的值
typedef struct
{
	int gIsNewFood;
	bool gIsNewBlood;
	int gIsPause;
	int g_aMap[WEIGHT][HEIGHT];
	int g_nSpeed;
	int g_nScore;
	int g_nBlood;
	int g_nFastSpeed;
	int g_nNormalSpeed;
	int g_len;
}GAMESAVE, *pGAMESAVE;
//两个存档位
extern pGAMESAVE g_save;
extern pGAMESAVE g_save2;