#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number.\n";
    cin>>n;
    if(n%2==0)
    {
        cout<<"Even No. "<<n;
    }
    else{
        cout<<"Odd No. "<<n;
    }
    getch();
    return 0;
}