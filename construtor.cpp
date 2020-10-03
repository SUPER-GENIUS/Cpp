#include<iostream>
using namespace std;

class test
{
private:
    int id;
public:
    test(int );
    test():id(0){};
    test(test &);
    void put(int t)
    {
        id=t ;
    }
    void display()
    {
        cout<<id;
    }
};

test::test(int i)
{id=i ;}

test::test(test &t)
{
id=t.id ;
}
int main()
{
    test a,b,c;

    a.put(100) ;
    b=test(1156);
    a.display() ; b.display() ; c.display() ;
    return 0;
}

