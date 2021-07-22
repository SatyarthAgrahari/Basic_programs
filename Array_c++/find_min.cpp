#include<iostream>
using namespace std;
int main()
{
    int A[]={22,34,56,77,2,54,6},n=7;
    int min=INT32_MAX;
    for(int i=0;i<n;i++)
    {
        if(A[i]<min)
         min=A[i];
    }
    cout<<min;
}