#include<iostream>
using namespace std;
class rectangle
{
    int hight;
    int wigth;
public:
   int area();
    void set(int h,int w);
   rectangle(int h,int w);
   ~rectangle();
};
int rectangle::area()
{
    return hight * wigth;
}
 rectangle ::rectangle(int h,int w)
{
    hight=h;
    wigth=w;
    cout<<"constroctor  "<<area()<<endl;
}
rectangle ::~rectangle()
{
     cout<<"destroctor  "<<area()<<endl;
}
int main()
{
    rectangle ob(6,9),ob1(3,9);
   //ob.set(5,6);
    //cout<<"Area = "<<ob.area()<<endl;
    return 0;
}
