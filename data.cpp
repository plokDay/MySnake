#include"data.h"
int gIsNewFood = 0;
bool gIsNewBlood = true;
int gIsPause = -1;
int g_aMap[WEIGHT][HEIGHT];
int g_nSpeed = 400;
int g_nNormalSpeed = 400;
int g_nFastSpeed = 150;
int g_nScore = 0;
int g_nBlood = 10;
int g_len = 0;
pGAMESAVE g_save = new GAMESAVE;
//pGAMESAVE g_save2 = new GAMESAVE;

vector<COORD> g_snake;
COORD g_tmp[100] = { 0 };

int g_aNewMap1[WEIGHT][HEIGHT] = { 0 };
int g_aNewMap2[WEIGHT][HEIGHT] = { 0 };
int g_aNewMap3[WEIGHT][HEIGHT] = { 0 };
//int g_aNewMap4[WEIGHT][HEIGHT] = { 0 };
char g_defauleMapName[50]="map1";
char g_sNamwMap1[50]="map1";
char g_sNamwMap2[50]="map2";
char g_sNamwMap3[50] = "map3";

char g_SaveName1[50] = { 0 };
//char g_SaveName2[50] = { 0 };