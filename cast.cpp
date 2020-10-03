#include<iostream>
#define PI 3.1416
using namespace std;
class radian
{
float rad;
public:
    
    radian(float ini=0){rad=ini;}
    void input()
    {
        cout<<"ENTER THE VALUE IN RADIAN\n";
        cin>>rad;
    }
    float getradian()
    {
        return(rad);
    }
    void output()
    {
        cout<<"Radian = "<<getradian();
    }
};
class degree
{   float deg;
    public:
    degree(float x=0){deg=x;}
    degree(radian x)
    {
        deg=(x.getradian()*180)/PI   ;                      //M_PI is the value of pi
    }
    operator radian()
    {
        return (radian((deg*PI)/180));
    }
    void input()
    {cout<<"ENTER VALUE IN DEGREE\n";
    cin>>deg;
    }
    void output()
    {
        cout<<"DEGREE = "<<deg;
    }
};
int main()
{
    degree deg;
    radian rad;
    cout<<"CONVERT DEGREE INTO RADIAN\n";
    deg.input();
    rad=deg;
    rad.output();
    cout<<"\nCONVERT RADIAN INTO DEGREE\n";
    rad.input() ;
    deg=rad ;
    deg.output() ;
    return 0;
}