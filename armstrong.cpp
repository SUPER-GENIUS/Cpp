#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,r,x,l=0;
cin>>n;
x=n;
while (x) 
    { 
        l++;                      //no. of digit
        x = x/10; 	
    } 
int temp = n, sum = 0; 
while (temp) 
{ 
r = temp%10; 
sum += pow(r, l); 
temp = temp/10; 
} 
if(n==sum)
 	cout<<"Armstrong number";
else cout<<"Not Armstrong";
}
