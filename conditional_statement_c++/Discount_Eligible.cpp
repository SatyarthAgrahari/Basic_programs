#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float amount,discount=0;
    cout<<"Enter the Amount.";
    cin>>amount;
    if(amount>=5000)
    {
        discount=amount-((amount*20)/100);
        cout<<discount;
    }
    else if(amount>=2000 && amount<5000)
    {
        discount=amount-((amount*10)/100);
        cout<<discount;
    }
    else{
        discount=amount-((amount*5)/100);
        cout<<discount;
    }
    getch();
    return 0;
}