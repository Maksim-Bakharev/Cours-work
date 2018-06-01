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
