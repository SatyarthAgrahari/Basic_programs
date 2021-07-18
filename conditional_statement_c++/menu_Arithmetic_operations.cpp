#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"Enter the two numbers.\n";
    cin>>a>>b;
    cout<<"1. Add\n";
    cout<<"2. Subtract\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"Enter the choice\n";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Addition is "<<(a+b);
        break;
    case 2:
        cout<<"Subtraction is "<<(a-b);
        break;
    case 3:
        cout<<"Multiplication is "<<(a*b);
        break;
    case 4:
        cout<<"Division is "<<(a/b);
        break;
    default:
        cout<<"Enter valid choice";
        break;
    }
    getch();
    return 0;

}