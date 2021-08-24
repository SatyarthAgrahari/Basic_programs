#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==(2*n))
    {
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not Perfect Number";
    }
    getch();
    return 0;

}