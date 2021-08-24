#include<iostream>
#include<conio.h>
using namespace std;
//370 371 153 407
int main()
{
    int n,temp,sum=0,rem=0;
    cout<<"Enter the Number ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<"Armstrong Number";
    }
    else
        cout<<"Not Armstrong";
    getch();
    return 0;

}