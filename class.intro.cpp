#include<iostream>
using namespace std;
class rectangle
{
  public:
        int hight;
        int wigth;
        int area();

};
inline int rectangle::area()
{
  return   hight*wigth;
}
 int main()
{
    rectangle obj;
    obj.hight=5;
    obj.wigth=4;
    cout<<"Area = "<<obj.area()<<endl;
    return 0;

}
