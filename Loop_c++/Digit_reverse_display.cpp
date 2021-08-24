#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,rem=0;
    cout<<"Enter the Number ";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        cout<<rem<<endl;
        n=n/10;
    }
    getch();
    return 0;
}