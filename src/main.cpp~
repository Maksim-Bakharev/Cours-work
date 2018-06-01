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

main () 
{
     
     int go=0, score=0, Polochenie=0, pynkt=0, k, x, y, Yx, Yy, Stena=0, chel=4, lvl=1, Siel1, Siel2, Siel3, Siel4, Zx, Zy, color1, color2, END=0, Flag=0, Flag1, Knopka;
     char name[21];
     printf("Ââåäèòå èìÿ: ");
     gets(name);
     printf("\n          ÌÅÍÞ\n");    
     printf("\n1) Íà÷àòü íîâóþ èãðó.\n2) Âûõîä.\n");
     
     LABLE:
     {
           printf("\nÂÛÁÅÐÈÒÅ ÏÓÍÊÒ ÌÅÍÞ: ");
           scanf("%d", &pynkt);
     }
     
     if ((pynkt>2) || (pynkt<1)) 
     {
           printf("Âûáðàííîãî âàìè ïóíêòà íå ñóùåñòâóåò.\nÏîâòîðèòå ïîïûòêó.");
           goto LABLE;
     }
     else
     if (pynkt==2) 
     {
           return 0;
     }
     else
     if (pynkt==1)
     {
           printf ("\nÏÐÀÂÈËÀ ÈÃÐÛ:\n1) Âàøà çàäà÷à: ñîáðàòü âñå žëî÷íûå èãðóøêè.\n2) Îïàñàéòåñü çëûõ ñíåãîâèêîâ, îíè î÷åíü îïàñíû.\n3) Ñîáåðèòå íåîáõîäèìîå êîëè÷åñòâî óðàøåíèé äëÿ ïåðåõîäà íà ñëåäóþùèé óðîâåíü.\n4) Ïðè îêîí÷àíèè èãðû íàæìèòå Esc.\n5) Ïðè íàõîæäåíèè áàãà èãðû, îáðàùàéòåñü ê ñîçäàòåëþ.");
           LABLE4: 
           printf ("\n\nGO(1)?: ");
           scanf ("%d", &go);
           
           if (go!=1) 
           {
                 printf("Âûáðàííîãî âàìè ïóíêòà íå ñóùåñòâóåò.\nÏîâòîðèòå ïîïûòêó");
                 goto LABLE4;
           }

           if (go==1)
           {
                 Labirint();

x = 300; y = 300;
                 VNIZ ( x, y, 15, 0 );

setcolor(RED);
outtextxy( 555, 5, "Lvl: ");
setcolor(RED);
outtextxy( 538, 22, "Score: ");
setcolor(RED);
outtextxy( 551, 40, "Aim: ");

setcolor(WHITE);
outtextxy( 547, 240, "Next lvl");


if (lvl == 1)
{
Yx=100; Yy=500; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=100; Yy=100; ykrachenia ( Yx, Yy, 14, 14 );  
Yx=500; Yy=500; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=500; Yy=100; ykrachenia ( Yx, Yy, 14, 14 );
}


int Sx, Sy, Sx1, Sy1, Sx2, Sy2, Sx3, Sy3;
Sx = 220; Sy = 185; 
Sx1= 220; Sy1= 385;
Sx2= 380; Sy2=  85;
Sx3= 380; Sy3= 485; 

while (1)
{  
snegovik (Sx, Sy, 9, 0);
snegovik (Sx1, Sy1, 9, 0);
snegovik (Sx2, Sy2, 9, 0);
snegovik (Sx3, Sy3, 9, 0);

krug:
while (1)
{
                 for (int shagi=1; shagi <160; shagi++)
{
snegovik ( Sx, Sy, 0, 0);
Sx++;
snegovik ( Sx, Sy, 9,0 );

snegovik ( Sx1, Sy1, 0, 0);
Sx1++;
snegovik ( Sx1, Sy1, 9,0 );

snegovik ( Sx2, Sy2, 0, 0);
Sx2--;
snegovik ( Sx2, Sy2, 9,0 );

snegovik ( Sx3, Sy3, 0, 0);
Sx3--;
snegovik ( Sx3, Sy3, 9,0 );

{
if (kbhit())
{
k=getch();
setcolor(RED);
outtextxyT( 580, 22, score);
setcolor(RED);
outtextxyJ( 580, 40, chel);
setcolor(RED);
outtextxy( 580, 5, lvl);

if ( k == 75)
{
Stena = getpixel(x-21, y);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
x-=5;
LEVO ( x, y, 15,0 );
Polochenie=3;
}
}

if ( k == 72)
{
Stena = getpixel(x, y-21);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
y-=5;
VERH ( x, y, 15,0 );
Polochenie=1;
}
}

if ( k == 77)
{
Stena = getpixel(x+20, y);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
x+=5;
PRAVO ( x, y, 15,0 );
Polochenie=2;
}
}

if ( k == 80)
{  
Stena = getpixel(x, y+20);
if (Stena!=4)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
y+=5;
VNIZ ( x, y, 15,0 );
Polochenie=0;
}
}

