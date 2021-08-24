#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;
    public:
      rectangle(int length=1,int breadth=1)  //default parameter, non parameter and parameter costructor.
      {
          setLength(length);
          setBreadth(breadth);
      }
      rectangle(rectangle &c)                 //copy costructor.
      {
          length=c.length;
          breadth=c.breadth;
      }
      void setLength(int l);                  // mutator.
      void setBreadth(int b);                 //mutator.
      int getLength(){return length;}         //asccessor
      int getBreadth(){return breadth;}       //asccessor
      int area();                             //faslitators.
      int parimeter();                        //faslitators.
      int isSquare();                         //enquiry.
      ~ rectangle();                          //destructor.
};
    void rectangle::setLength(int l)
    {
        length=l>=0?l:1;
    }
    void rectangle::setBreadth(int b)
    {
        breadth=b>=0?b:1;
    }
    int rectangle::area()
    {
        return length*breadth;
    }
    int rectangle::parimeter()
    {
        return 2*(length+breadth);
    }
    int rectangle::isSquare()
    {
        return length==breadth?1:0;
    }
    rectangle::~rectangle()
    {
        cout<<"Rectangle Destroyed"<<endl;
    }

int main(){
    rectangle r1;
    r1.setLength(10);
    r1.setBreadth(10);
    cout<<r1.area()<<endl;
    cout<<r1.parimeter()<<endl;
    cout<<r1.isSquare()<<endl;

}