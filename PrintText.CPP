#include<stdio.h> 
#include<graphics.h> 
#include<dos.h> 
void printMsg() 
{ 
    
    int gdriver = DETECT,gmode,i; 
   char str[20];
   printf("Enter the text for styling\n"); 
   gets(str); 
   initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI"); 
  
    for (i=1; i<7; i++) 
    { 
        
        setcolor(i); 
        // settextstyle(font, orientation, size) 
        settextstyle(i,0,i); 
        outtextxy(100,20*i,str); 
        delay(500); 
    }  
    delay(2000); 
} 
int main() 
{ 
    printMsg(); 
    return 0; 
} 