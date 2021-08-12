#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
    char A[50];
    char B[50];
    cout<<"Enter your Name"<<endl;
    cin.get(A,50);
    cout<<"Wellcome "<<A<<endl;
    cout<<"Enter your Name"<<endl;
    cin.ignore();
    cin.get(B,50);
    cout<<"Wellcome "<<B;
    
    getch();
    return 0;

}