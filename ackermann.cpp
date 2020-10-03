#include<iostream>
using namespace std ;
int a(int i,int j)
{
    if(i==0)
        return j+1;
    else if(j==0)  
    {
        return a(i-1,1);
    }  
    else
    {
         return a(i-1,a(i,j-1)) ;
    }
        
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    cout<<a(n,i)<<" ";
}