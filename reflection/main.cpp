#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
	int gd=DETECT, gm;
	int ax, x1=100, x2=100, x3=200, y1=100, y2=200, y3=100;

	initgraph(&gd, &gm, "");

	//Divide the space
	line(getmaxx() /2, 0, getmaxx() /2, getmaxy());
	line(0, getmaxy() /2, getmaxx(), getmaxy()/2);

	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x3, y3, x1, y1);

    line(getmaxx()-x1, y1, getmaxx()-x2, y2);
    line(getmaxx()-x2, y2, getmaxx()-x3, y3);
    line(getmaxx()-x3, y3, getmaxx()-x1, y1);


	getch();

	closegraph();

	return 0;
}
