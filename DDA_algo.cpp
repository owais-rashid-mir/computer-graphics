#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
	int gd =DETECT;
	int gmode;
	
	initgraph(&gd,&gmode,"");
	
	putpixel(100,200,RED);
	
	
	
	closegraph();
	
	return 0;
	
	
	
}
