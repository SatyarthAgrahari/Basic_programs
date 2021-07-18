#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int v,u,a;
    float s;
    cout<<"Enter the value of u, v and a respectively\n";
    cin>>u>>v>>a;
    s=(float)(v*v-u*u)/(2*a);
    cout<<"Distance is "<<s;
    getch();
    return 0;
}