#include<iostream>
using namespace std;
int main()
{
    int A[]={-1,3,4,5,-6,7,8,-11},n=8;
    int ncount=0,pcount=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]<0)
        {
          ncount++;
        }
        else{
          pcount++;
        }
    }
    cout<<"Negative "<<ncount<<" "<<"Positive "<<pcount;
}