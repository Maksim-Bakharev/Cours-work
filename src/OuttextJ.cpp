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

void outtextxyJ(int x, int y, int j)
{
     char bif[3];
     snprintf(bif, sizeof(bif), "%d", j);
     outtextxy(x, y, bif);
}
