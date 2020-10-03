#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float d,e,i,n,l=0,guess=0;
e=.01;
i=0.01;
cin>>n;

while(( (pow(guess,3))-n)>=e && guess<=n)
    {
        guess+=i;
        l++;
    }
cout<<guess;   
} 
