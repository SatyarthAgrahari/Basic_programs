#include<iostream>
using namespace std;
template<class T>
T add(T a,T b=0)
{
    return a+b;
}
int main()
{
    cout<<add(2,5)<<endl;
    cout<<add(5)<<endl;
    cout<<add(2.5f,6.1f);

}