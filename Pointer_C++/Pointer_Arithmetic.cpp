#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[]={2,3,4,5,6,7,8};
    int *p=A,*q=&A[4];
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    //cout<<p<<endl;
    cout<<*p+2<<endl;
   /* for(int i=0;i<7;i++)
    {
        cout<<*A+i<<" ";
    }*/
    /*for(int i=0;i<7;i++)
    {
        cout<<p[i]<<" ";
    }*/
   /* for(int i=0;i<7;i++)
    {
        cout<<*p+i<<" ";
    }*/
    /*for(int i=0;i<7;i++)
    {
        cout<<*p<<" ";
        p++;
    }*/
    cout<<p-q;
}