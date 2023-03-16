#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "");

	int x1,y1,x2,y2,tx,ty;

    cout<<"Enter the initial and end coordinates of line"<<endl;
    cin>>x1>>y1>>x2>>y2;

    line(x1,y1,x2,y2);

    cout<<"enter the translation factors"<<endl;
    cin>>tx>>ty;

    x1=x1+tx;
    y1=y1+ty;
    x2=x2+tx;
    y2=y2+ty;

    line(x1,y1,x2,y2);

    int c,s,angle;
    cout<<"Enter rotation angle: ";
    cin >> angle ;

    c = cos(angle *3.14/180);
    s = sin(angle *3.14/180);


    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);

    line(x1, y1 ,x2, y2);

	getch();

	closegraph();

	return 0;
}
