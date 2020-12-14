#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int num,gd=DETECT,gm;  
initgraph (&gd,&gm,"c:\\turboc3\\bgi");  
setbkcolor(GREEN);  
do
{
outtextxy(10,10,"1)LINE");
outtextxy(10,20,"2)RECTANGLE");
outtextxy(10,30,"3)ARC");
outtextxy(10,40,"4)CIRCLE");
outtextxy(10,50,"5)ELLIPSE");
outtextxy(10,60,"6)EXIT");
outtextxy(10,70,"ENTER UR CHOICE:");
scanf("%d",&num);
switch(num)
{
case 1:
line(50,80,190,80); 
break;
case 2:
rectangle(125,115,215,165);
break;
case 3:
arc(120,200,180,0,30); 
break;
case 4:
circle(120,270,30);  
break;
case 5:
ellipse(120,350,0,360,30,20); 
break;
case 6:
exit(0);
}
}while(num<6);
 getch();  
}
