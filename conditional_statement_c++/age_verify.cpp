#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age.\n";
    cin>>age;
    if(age<12 || age>50)
       cout<<"Eligible";
    else
       cout<<"Not Eligible.";
    getch();
    return 0;
}