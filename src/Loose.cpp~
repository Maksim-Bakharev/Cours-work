#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <ctime>
#include <fstream>
#include "OuttextT.cpp"


int loose (int score, int Knopka)
{
closegraph();
initwindow(900,900);
settextstyle(0,HORIZ_DIR,5);
outtextxy(140, 150, "GAME OVER!!!" );
outtextxy(140, 300, "YOUR SCORE:" );
outtextxyT( 600, 300, score);

LABLE1:
{
Knopka=getch();
if (Knopka==27)
return 0;
else goto LABLE1;
}
} 
