#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the hour\n";
    cin>>n;
    if(n>=9 && n<=18)
       cout<<"working hour.";
    else
       cout<<"Leisure hour.";
    getch();
    return 0;

}