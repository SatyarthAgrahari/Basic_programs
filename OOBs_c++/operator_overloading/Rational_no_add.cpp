#include<iostream>
using namespace std;
class rational
{
  private:
   int p;
   int q;
   public:
     rational(int p=1,int q=1)
     {
         this->p=p;
         this->q=q;
     }
     rational(rational &x)
     {
         this->p=x.p;
         this->q=x.q;
     }
     void setP(int p)
     {
        this->p=p;
     }
     void setQ(int q)
     {
         this->q=q;
     }
     int getP(){return p;}
     int getQ(){return q;}
     rational operator+(rational x)
     {
         rational temp;
         temp.p=(this->p*x.q)+(this->q*x.p);
         temp.q=this->q*x.q;
         return temp;
     }
    friend ostream & operator<<(ostream &os,rational &r);
};
    ostream & operator<<(ostream &os,rational &r)
    {
        os<<r.p<<"/"<<r.q;
         return os;
     }
int main()
{
    rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
    return 0;

}