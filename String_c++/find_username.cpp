#include<iostream>
using namespace std;
int main()
{
    string email="satyarth1611@gmail.com";
    int i=(int)email.find('@');
    cout<<"User name is "<<email.substr(0,i);
}