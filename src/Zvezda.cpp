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

void zvezda(int z, int m, int color1,int color2) {
    setcolor(color1);
    setfillstyle(1, color2);
    moveto(z, m);   
    lineto(z+15, m+10);
    lineto(z, m+20);
    lineto(z-15, m+10);
    lineto(z, m);
    floodfill(z, m, color1); 
}
