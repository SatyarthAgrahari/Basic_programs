#include<iostream>
using namespace std;
int main()
{
    string str="AwesOme";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        if(*it=='A' || *it=='B' || *it=='C' || *it=='D' || *it=='E' || *it=='F' || *it=='G' || *it=='H' ||*it=='I' || *it=='J' || *it=='K' || *it=='L' || *it=='M' || *it=='N' || *it=='O' || *it=='P' || *it=='Q' || *it=='R' || *it=='S' || *it=='T' || *it=='U' ||*it=='V' || *it=='W' || *it=='X' || *it=='Y' || *it=='Z' )
         *it=*it+32;
         else
           *it=*it-32;
    }
    cout<<str<<endl;
}