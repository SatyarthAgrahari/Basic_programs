#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int r1,r2,b,a,c;
    cout<<"Enter the value a, b and c repectively.\n";
    cin>>a>>b>>c;
    r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"Root is "<<r1<<" "<<r2;
    getch();
    return 0;

}