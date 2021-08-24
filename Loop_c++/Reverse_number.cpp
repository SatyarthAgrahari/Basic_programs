#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,rem=0,rev=0;
    cout<<"Enter the Number ";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=(int)n/10;
    }
    cout<<rev;
    getch();
    return 0;
}