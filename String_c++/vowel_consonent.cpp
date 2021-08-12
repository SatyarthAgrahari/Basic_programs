#include<iostream>
using namespace std;
int main()
{
    string str="I am Yash";
    int Cvowel=0,Cconsonent=0,space=0;
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        if(*it=='A' || *it=='a' || *it=='E' || *it=='e' || *it=='I' || *it=='i' || *it=='O' || *it=='o' ||*it=='U' || *it=='u')
          Cvowel++;
        else if(*it==' ')
           space++;
        else Cconsonent++;
    }
    cout<<"Vowels "<<Cvowel<<endl;
    cout<<"Consonents "<<Cconsonent<<endl;
    cout<<"Words "<<space+1<<endl;
}
