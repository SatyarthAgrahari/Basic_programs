#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int count=0;
    string str="My name is Yash";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        count++;
    }
    cout<<count<<endl;
    cout<<str<<endl;

}