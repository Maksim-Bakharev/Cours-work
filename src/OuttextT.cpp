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


void outtextxyT(int x, int y, int t) {
    char baf[3];
    snprintf(baf, sizeof(baf), "%d", t);
    outtextxy(x, y, baf);
}
