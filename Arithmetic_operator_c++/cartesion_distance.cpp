#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    float d;
    cout<<"Enter the value of x1, x2, y1 and y2 respectively.\n";
    cin>>x1>>x2>>y1>>y2;
    d=(float)sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout<<"Distance is "<<d;
    getch();
    return 0;
}