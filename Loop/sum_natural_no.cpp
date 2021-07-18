#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum of Natural number is "<<sum;
    getch();
    return 0;
}