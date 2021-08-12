#include<iostream>
using namespace std;
int main()
{
    string str="malayalam";
    string rev="";
    int s=(int)str.length();
    rev.resize(s);
    string::iterator r;
    string::reverse_iterator it;
    for(r=rev.begin(),it=str.rbegin();it!=str.rend();it++,r++)
    {
         *r=*it;
    }
    
    if(str.compare(rev)==0)
      cout<<"Palindrome";
    else cout<<"Not Palindrome";
}