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

void VNIZ ( int x, int y, int color1,int color2 )
{
     setcolor(color1);
     setfillstyle ( 1, color2 );
     circle(x,y,19);
     circle(x-8,y,5);
     circle(x+8,y,5);
     moveto(x+5,y+12);
     lineto(x-5,y+12);
     floodfill(x,y,color1); 
}

void VERH ( int x, int y, int color1,int color2 )
{
     setcolor(color1);
     setfillstyle ( 1, color2 );
     circle(x,y,19);
     circle(x-8,y,5);
     circle(x+8,y,5);
     moveto(x+5,y-12);
     lineto(x-5,y-12);
     floodfill(x,y,color1);   
}

void LEVO ( int x, int y, int color1,int color2 )
{
     setcolor(color1);
     setfillstyle ( 1, color2 );
     circle(x,y,19);
     circle(x-10,y-10,5);
     moveto(x-5,y+5);
     lineto(x-17,y+6);
     floodfill(x,y,color1);   
}
