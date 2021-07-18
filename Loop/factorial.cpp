#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"Enter the number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       fact*=i;
    }
    cout<<"Factorial is "<<fact;
    getch();
    return 0;


}