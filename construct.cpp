#include<iostream>
using namespace std;
class AMOUNT{
float p,r,t;
public:
AMOUNT()
{
    p=1000;r=10;t=1;
}
AMOUNT(int a):p(a),r(1.5),t(3){};
AMOUNT(int a,int b):p(a),r(b),t(2.5){};
AMOUNT(int a,int b ,int c):p(a),r(b),t(c){};
void print()
{
    cout<<"SI = "<<(p*r*t)/100<<endl;
}
};
int main()
{
    AMOUNT b(1050),c(1000,2,15),d(1100,3),a;
    a.print();
    b.print();
    c.print();
    d.print();
    return 0;
}