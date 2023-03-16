#include<iostream>
#include<graphics.h>
#include<dos.h>

using namespace std;

void boundary_fill(int x, int y, int fcolor, int bcolor)
{
    if ((getpixel(x, y) != bcolor) && (getpixel(x, y) != fcolor))
    {
        delay(10);
        putpixel(x, y, fcolor);
    boundary_fill(x + 1, y, fcolor, bcolor);
    boundary_fill(x , y+1, fcolor, bcolor);
    boundary_fill(x+1, y + 1, fcolor, bcolor);
    boundary_fill(x-1, y - 1, fcolor, bcolor);
    boundary_fill(x-1, y, fcolor, bcolor);
    boundary_fill(x , y-1, fcolor, bcolor);
    boundary_fill(x-1, y + 1, fcolor, bcolor);
    boundary_fill(x+1, y - 1, fcolor, bcolor);
    }
}

int main()
{
    int x, y, fcolor, bcolor;
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");
    printf("Enter the seed point (x,y) : ");
    scanf("%d%d", &x, &y);
    printf("Enter boundary color : ");
    scanf("%d", &bcolor);
    printf("Enter new color : ");
    scanf("%d", &fcolor);
    rectangle(50,50,100,100);
    boundary_fill(x,y,fcolor,bcolor);

    return 0;
    getch();
}
