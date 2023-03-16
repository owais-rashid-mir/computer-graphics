#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    line(100, 122, 134, 150);
    line(10, 20, 30, 40);
    getch();

    closegraph();
}
