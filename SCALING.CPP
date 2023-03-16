#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int gd=DETECT, gm;
	int x1, x2, y1, y2, sx, sy;

	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	cout << "Enter first coordinate\n";
	cin >> x1 >> y1;

	cout << "Enter 2nd coordinate \n:";
	cin >> x2 >> y2;

	line(x1, y1, x2, y2);

	cout << "Enter the scaling distance: \n";
	cin >> sx >> sy;

	setcolor(RED);

	x1 = x1 * sx;
	y1 = y1 * sy;

	x2 = x2 * sx;
	y2 = y2 * sy;

	line(x1, y1, x2, y2);

	getch();

	closegraph();
}