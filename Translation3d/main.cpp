#include <iostream>
#include<graphics.h>

using namespace std;
void triangle(int x1, int x2, int x3, int y1, int y2, int y3, int z1, int z2, int z3)
{
    line(x1,y1,x2,y2);
    line(x2,y2, x3,y3);
    line(x3,y3,x1,y1);
}
int main()
{
	int gd=DETECT, gm;
	int x1, x2, x3, y1, y2, y3, z1, z2, z3, tx, ty, tz;

	initgraph(&gd, &gm, "");
	cout << "Enter first coordinate\n";
	cin >> x1 >> y1 >> z1;

	cout << "Enter 2nd coordinate \n:";
	cin >> x2 >> y2 >> z2;

	cout << "Enter 3rd coordinate \n:";
	cin >> x3 >> y3 >> z3;



	cout << "Enter the translation distance: \n";
	cin >> tx >> ty >> tz;

	setcolor(RED);

	x1 = x1 + tx;
	y1 = y1 + ty;
	z1 = z1 + tz;

	x2 = x2 + tx;
	y2 = y2 + ty;
	z2 = z2 + tz;

	triangle(x1, y1, z1, x2, y2, z2, x3, y3, z3);

	getch();

	closegraph();
}
