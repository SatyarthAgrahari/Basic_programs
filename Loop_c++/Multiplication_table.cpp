#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the Number\n";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    getch();
    return 0;

}