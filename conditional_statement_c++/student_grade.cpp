#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5,Total,Avg;
    cout<<"Enter the student Number.\n";
    cin>>n1>>n2>>n3>>n4>>n5;
    Total=n1+n2+n3+n4+n5;
    Avg=Total/5;
    if(Avg>=60)
       cout<<"A";
    else if(Avg>=35 && Avg<60)
       cout<<"B";
    else
       cout<<"c";
    getch();
    return 0;
}