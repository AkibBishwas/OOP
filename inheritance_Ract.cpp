#include<bits/stdc++.h>
using namespace std;
class shape
{
public:
    int a,b;

    void setvalue(int x,int y)
    {
        a=x;
        b=y;
    }

};
class ract : public shape
{
public:

    int c;
   int output()
    {
        c=a*b;
    }
};
int main()
{
    ract r1;
    int length,weigth;
    cout<<"enter the length: ";
    cin>>length;
      cout<<"enter the weigth: ";
    cin>>weigth;
   r1.setvalue(length,weigth);
    cout<<r1.output();
    return 0;
}
