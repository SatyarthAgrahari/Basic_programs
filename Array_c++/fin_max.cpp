#include<iostream>
using namespace std;
int main()
{
    int A[]={10,12,66,100,55,34},n=6;
    int max=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<max;
}