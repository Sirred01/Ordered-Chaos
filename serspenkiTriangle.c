#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<bits/stdc++.h>
// #define X 640
// #define Y 480
#define N 999


//cartesian x co-ordinate
int x_cart(int x_cart)
{
    int x = x_cart + 320;

    return x;
}

//cartesian y co-ordinate
int y_cart(int y_cart)
{
    int y = 240 - y_cart;

    return y;
}

int main()
{
    int gd = DETECT, gm, color;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd,&gm,data );
    
    

    int a[2] = {x_cart(-100),y_cart(-80)},b[2] = {x_cart(0),y_cart(60)},c[2] = {x_cart(100),y_cart(-80)};
    float radius = 3.0;

    //vertex a
    circle(a[0],a[1],radius);
    setfillstyle(SOLID_FILL,15);
    floodfill(a[0],a[1],15);

    //vertex b
    circle(b[0],b[1],radius);
    setfillstyle(SOLID_FILL,15);
    floodfill(b[0],b[1],15);

    //vertex c
    circle(c[0],c[1],radius);
    setfillstyle(SOLID_FILL,15);
    floodfill(c[0],c[1],15);

    

    int p[2]= {x_cart(0),y_cart(0)};
    int x = 2;

    
    
    putpixel(p[0],p[1],15);
     
for(long int i = 0; i<10000;i++)
{   

    delay(6000);

    for(int j=0;j<=1;j++)
    {   
        int n =  (int)((double)rand() / ((double)RAND_MAX + 1) * N);

        if(n<333)
        p[j] = (a[j]+p[j])/x;

        else if(n<666)
        p[j] = (b[j]+p[j])/x;

        else
        p[j] = (c[j]+p[j])/x;
    }

    putpixel(p[0],p[1],15);

    
}


    getch();

    closegraph();

}



