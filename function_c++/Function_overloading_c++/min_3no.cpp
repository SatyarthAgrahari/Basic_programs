#include<iostream>
using namespace std;
int min(int a,int b)
{
    return a<b?a:b;
}
float min(float a,float b)
{
    return a<b?a:b;
}
int min(int a,int b,int c)
{
    return a<b && a<c?a:(b<c?b:c);
}
int main()
{
    cout<<min(5,6)<<endl;
    cout<<min(5.5f,7.99f)<<endl;
    cout<<min(2,4,9)<<endl;

}