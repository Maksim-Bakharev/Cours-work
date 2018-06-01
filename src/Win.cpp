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

using namespace std;

int vixod (char name[21], int Knopka) {
    float time = 0;

    closegraph();
    initwindow(900, 900);
    settextstyle(0, HORIZ_DIR, 5);
    outtextxy(140, 150, "YOU WIN!!!");
    outtextxy(140, 250, "RAZRABOTCHIKI:");
    outtextxy(140, 350, "Bakharev Maksim"); 
    outtextxy(140, 400, "Koroteev Maksim");

    //Records//
    time = clock()/1000.0;
    ofstream fp("TABL.txt", ios::app);
    fp<< name <<": "<< time << endl;
    fp.close();
    //Records//

    LABLE2: {
        Knopka = getch();
        if (Knopka == 27) return 0;
        else goto LABLE2;
    }
}
