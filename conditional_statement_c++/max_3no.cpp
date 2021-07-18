#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the Numbers";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a;
    }
    else{
        if(b>c)
        {
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    getch();
    return 0;
}