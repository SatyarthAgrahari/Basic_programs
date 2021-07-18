#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    float d,r1,r2;
    cout<<"Enter the value of a, b and c.\n";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0)
    {
        r1=(float)-b/(2*a);
        cout<<"Roots are real and equal "<<r1;
    }
    else if(d>0)
    {
        r1=(float)(-b+sqrt(d))/(2*a);
        r2=(float)(-b-sqrt(d))/(2*a);
        cout<<"Roots are real and unequal "<<r1<<" "<<r2;
    }
    else{
        cout<<"Roots are Imaginary";
    }
    getch();
    return 0;
}