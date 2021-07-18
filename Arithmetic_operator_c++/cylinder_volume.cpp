#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float pi=3.14,r,h,vol;
    cout<<"Enter the value of radius and height.\n";
    cin>>r>>h;
    vol=pi*r*r*h;
    cout<<"Volume of Cylinder is "<<vol;
    getch();
    return 0;


}