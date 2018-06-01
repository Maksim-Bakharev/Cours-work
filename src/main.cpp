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

Siel1 = getpixel(x, y+20);
Siel2 = getpixel(x, y-21);
Siel3 = getpixel(x+20, y);
Siel4 = getpixel(x-21, y);
if ((Siel1 == 14) || (Siel1 == 5)) {  ykrachenia (x, y+30, 0, 0); score++;  }
if ((Siel2 == 14) || (Siel2 == 5)) {  ykrachenia (x, y-30, 0, 0); score++;  }
if ((Siel3 == 14) || (Siel3 == 5)) {  ykrachenia (x+30, y, 0, 0); score++;  }
if ((Siel4 == 14) || (Siel4 == 5)) {  ykrachenia (x-30, y, 0, 0); score++;  }


if (score==1) {setcolor(YELLOW);  ykrachenia(723,300,14,0);}
if (score==2) {setcolor(YELLOW);  ykrachenia(700,300,14,0);}
if (score==3) {setcolor(YELLOW);  ykrachenia(778,300,14,0);}
if (score==4) {setcolor(YELLOW);  ykrachenia(801,300,14,0);}
if (score==5) {setcolor(YELLOW);  ykrachenia(824,300,14,0);}
if (score==6) {setcolor(YELLOW);  ykrachenia(677,300,14,0);}
if (score==7) {setcolor(YELLOW);  ykrachenia(723,280,14,0);}
if (score==8) {setcolor(YELLOW);  ykrachenia(700,280,14,0);}
if (score==9) {setcolor(YELLOW);  ykrachenia(778,280,14,0);}
if (score==10){setcolor(YELLOW);  ykrachenia(801,280,14,0);}
if (score==11){setcolor(YELLOW);  ykrachenia(723,260,14,0);}
if (score==12){setcolor(YELLOW);  ykrachenia(778,260,14,0);}
if (score>12) {setcolor(5);       zvezda(750,230,5,5); Flag1++; vixod(name,Knopka);}
}
if (Polochenie==3) LEVO ( x, y, 0, 0);
y+=5;
VNIZ ( x, y, 15,0 );
Polochenie=0;
}
}

if ((x<=10) || (y<=10) || (y>=590))
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);
closegraph();
printf ("\n   ÊÎÍÅÖ ÈÃÐÛ!!!\n\nÂû íàáðàëè %d î÷êà(îâ)\n", score);
goto LABLE;
}

if (score==chel) 
{
setcolor(BLACK);
moveto (540, 260);    
lineto (540, 339);  
}

if (x>=585)
{
if (Polochenie==0) VNIZ ( x, y, 0, 0);
if (Polochenie==1) VERH ( x, y, 0, 0);
if (Polochenie==2) PRAVO ( x, y, 0, 0);
if (Polochenie==3) LEVO ( x, y, 0, 0);       
x=300; y=300;  
VNIZ ( x, y, 15,0 );  
Polochenie=0;  

if (lvl==1)
{
chel=12;
setcolor(RED);
moveto (540, 260);    
lineto (540, 339);
 
Yx=100; Yy=500; ykrachenia ( Yx, Yy, 14, 14 );
Yx=100; Yy=100; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=190; Yy=190; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=410; Yy=410; ykrachenia ( Yx, Yy, 14, 14 );
Yx=190; Yy=410; ykrachenia ( Yx, Yy, 14, 14 );
Yx=410; Yy=190; ykrachenia ( Yx, Yy, 14, 14 );
Yx=500; Yy=500; ykrachenia ( Yx, Yy, 14, 14 ); 
Yx=500; Yy=100; ykrachenia ( Yx, Yy, 14, 14 ); 
}

if (lvl==2)
{
chel=13;
setcolor(RED);
moveto (540, 260);    
lineto (540, 339);

Zx= 100; Zy=300;
ykrachenia ( Zx, Zy, 5, 5); 
}
lvl++;          
}
}

END = getpixel(x+20, y);
if (END==9)
{ 
loose (score,Knopka);
}  

END = getpixel(x-21, y);
if (END==9)
{ 
loose (score,Knopka);
} 

END = getpixel(x, y+20);
if (END==9)
{ 
loose (score,Knopka);
} 

END = getpixel(x, y-21);
if (END==9)
{ 
loose (score,Knopka);
} 
}
