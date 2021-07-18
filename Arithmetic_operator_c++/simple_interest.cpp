#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float p,r,t,SI;
    cout<<"Enter the value of princliple price, rate and time respectively.\n";
    cin>>p>>r>>t;
    SI=(p*r*t)/100;
    cout<<"Simple Interest is "<<SI;
    getch();
    return 0;

}