#include<iostream>
using namespace std;
int main()
{
    int A[]={2,3,4,5,6},sum=0,n=5;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<sum;
}