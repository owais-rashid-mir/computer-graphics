#include <graphics.h>
#include <conio.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	line(100, 150, 200, 210);
	circle(200, 350, 100);

    getch();
	closegraph();

}

