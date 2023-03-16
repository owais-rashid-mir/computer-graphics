#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
	int gd=DETECT, gm;
	int x1, x2, y1, y2;
	double s, c, angle;

	initgraph(&gd, &gm, "");
	cout << "Enter first coordinate of line\n";
	cin >> x1 >> y1;

	cout << "Enter 2nd coordinate of line\n:";
	cin >> x2 >> y2;

	line(x1, y1, x2, y2);

	cout << "Enter rotation angle: \n";
	cin >> angle;

	setcolor(RED);

	c = cos(angle*3.14/180);
	s = sin(angle*3.14/180);

	x1 = floor(x1*c+y1*s);
	y1 = floor(-x1*s+y1*c);
	x2 = floor(x2*c+y1*s);
	y2 = floor(-x2*s+y2*c);

	line(x1, y1, x2, y2);

	getch();

	closegraph();

	return 0;
}
