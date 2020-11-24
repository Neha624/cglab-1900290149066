#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int x1,y1,x2,y2;

void translation()
{
int tx,ty,xn1,xn2,yn1,yn2;
printf("\n Enter the translation\n");
scanf("%d%d",&tx,&ty);
cleardevice();
outtextxy(400,100,"TRANSLATION");
xn1=x1+tx;
yn1=y1+ty;
xn2=x2+tx;
yn2=y2+ty;
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();
}

void scaling()
{
int xn1,xn2,yn1,yn2;
float sx,sy;
printf("Enter the scaling factor");
scanf("%f%f",&sx,&sy);
cleardevice();
outtextxy(300,200,"SCALING");
xn1=x1*sx;
yn1=y1*sy;
xn2=x2*sx;
yn2=y2*sy;
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();
}

void rotation()
{
int r;
float rx,xn1,xn2,yn1,yn2;
printf("\n enter the angle for rotation");
scanf("%d",&r);
cleardevice();
outtextxy(500,200,"ROTATION");
rx=(r*3.14)/180;
xn1=x1*cos(rx)-y1*sin(rx);
yn1=y1*cos(rx)+x1*sin(rx);
xn2=x2*cos(rx)-y2*sin(rx);
yn2=y2*cos(rx)+x2*sin(rx);
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();
}



void get()
{
printf("\n Enter the coordinates x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
outtextxy(200,100,"ORIGINAL LINE");
line(x1,y1,x2,y2);
getch();
}

void main()
{
int ch,gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
get();
do
{
cleardevice();
outtextxy(10,10,"1)TRANSLATION");
outtextxy(10,20,"2)SCALING");
outtextxy(10,30,"3)ROTATION");
outtextxy(10,60,"4)EXIT");
outtextxy(10,70,"ENTER UR CHOICE:");
scanf("%d",&ch);
switch(ch)
{
case 1:
translation();
break;
case 2:
scaling();
break;
case 3:
rotation();
break;
case 4:
exit(0);
}
}while(ch<4);
}
