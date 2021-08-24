#include<iostream>
using namespace std;
template <class T>
T max(T a,T b,T c=0)
{
    return a>b && a>c?a:(b>c?b:c);
}
int main()
{
    cout<<max(22,44,0);

}