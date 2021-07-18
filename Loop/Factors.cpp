#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the value ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
    getch();
    return 0;
}