#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the numbers.\n";
    cin>>a;
    if(a<0)
    {
        cout<<"Negative no. "<<a;
    }
    else{
        cout<<"Positive no. "<<a;
    }
    getch();
    return 0;
}