#include<iostream>
#include<graphics.h>
#include<dos.h>

using namespace std;

void flood(int x,int y,int fillColor,int defaultColor)
{
	if(getpixel(x,y)== defaultColor)
	{
	    delay(1);

		putpixel(x,y,fillColor);

		//4 connected
		/*flood(x+1,y,fillColor,defaultColor);
		flood(x-1,y,fillColor,defaultColor);
		flood(x,y+1,fillColor,defaultColor);
		flood(x,y-1,fillColor,defaultColor); */

        // 8 connected
        flood(x + 1, y, fillColor, defaultColor);
        flood(x-1, y, fillColor, defaultColor);
        flood(x , y+1, fillColor, defaultColor);
        flood(x , y-1, fillColor, defaultColor);

        flood(x+1, y + 1, fillColor, defaultColor);
        flood(x-1, y - 1, fillColor, defaultColor);
        flood(x-1, y + 1, fillColor, defaultColor);
        flood(x+1, y - 1, fillColor, defaultColor);

	}
}


int main()
{
	int gm,gd=DETECT,radius;

	initgraph(&gd,&gm,"");
	rectangle(50,50, 100, 100);
	flood(55,55,40,0);
	closegraph();
	return 0;
}
