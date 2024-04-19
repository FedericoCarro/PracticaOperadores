#include<stdio.h>
#define s scanf
#define p printf
int main()
{
    int x,y;
    x=7;
    y=-2+--x;
    p("%d",y);
    y+=2;
    p("\n%d",y);
    y=(y==x);
    p("\n%d",y);
    y=y++-x;
    p("\n%d",y);
    return 0;
}