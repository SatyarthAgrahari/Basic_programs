#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
    char A[50];
    char B[50];
    cout<<"Enter the Name "<<endl;
    cin.getline(A,50);
    cout<<"Wellcome "<<A<<endl;
    cout<<"Enter the name again "<<endl;
    cin.getline(B,50);
    cout<<"Wellcome "<<B<<endl;
    getch();
}