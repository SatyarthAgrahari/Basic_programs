#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the two numbers ";
    cin>>n>>m;
    while(n!=m)
    {
        if(n>m)
           n=n-m;
        else if(m>n)
           m=m-n;
    }
    cout<<m;
    getch();
    return 0;
}