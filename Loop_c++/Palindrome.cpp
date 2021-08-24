#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,rem=0,rev=0,p=0;
    cout<<"Enter the number ";
    cin>>n;
    p=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(p==rev)
    {
        cout<<"Palindrome Number";
    }
    else{
        cout<<"Not Palindrome";
    }
    getch();
    return 0;
}