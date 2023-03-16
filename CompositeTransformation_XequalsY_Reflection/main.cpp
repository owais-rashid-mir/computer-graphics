#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

using namespace std;

int main()
{
    //variables for coordinates
    int x1,y1,x2,y2,x3,y3;

	int gd=DETECT, gm;
	initgraph(&gd, &gm, "");

    //thses lines are just for the understanding of screen layout
    //diagonal line
     line(0,0,getmaxx(),getmaxy());
     //vertical (left)
     line(0,0,0,getmaxy());
     //horizantal (top)
     line(0,0,getmaxx(),0);
     //vertical (right)
     line(getmaxx(),0,getmaxx(),getmaxy());
     //horizantal (bottom)
     line(0,getmaxy(),getmaxx(),getmaxy());

    //read three coordinates(for triangle)
    cout<<"enter coordinates"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    //draw three lines of original triangle
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    //draw three lines of reflection triangle
    //by using x' = y and y' = x formulas (reflection about line y = x)
    line(y1,x1,y2,x2);
    line(y2,x2,y3,x3);
    line(y3,x3,y1,x1);
    //end of program

	getch();

	closegraph();

	return 0;
}
