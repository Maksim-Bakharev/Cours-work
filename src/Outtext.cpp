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

void outtextxy(int x, int y, int lvl)
{
     char buf[3];
     snprintf(buf, sizeof(buf), "%d", lvl);
     outtextxy(x, y, buf);
}
