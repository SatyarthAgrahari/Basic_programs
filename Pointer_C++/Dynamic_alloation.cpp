#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size ";
    cin>>size;
    int *A=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<endl;
    }
    delete []A;
    A=nullptr;
    getch();
    return 0;

}