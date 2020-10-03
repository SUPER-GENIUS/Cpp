#include <iostream>
using namespace std;
struct complex
{
    float a,b;
} ;
int main()
{
complex a,b,c;
cout<<"Enter first complex no.\n";
cin>>a.a>>a.b;
cout<<"Enter second complex no.\n";
cin>>b.a>>b.b ;
c.a=a.a+b.a ;
c.b=a.b+b.b ;
cout<<"The resultant complex no. is "<<c.a<<(c.b>=0?"+":"")<<c.b<<"i";
return 0;
}