#include <bits/stdc++.h>

using namespace std;



int reverse_int(int i)
{
    int r=0;
    while(i>0)
    {
        r=r*10+i%10;
        i=i/10;
    }
    return r ;
}
// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
int count=0 ;
while(i<=j)
{
    if(abs(i-reverse_int(i))%k==0)
        count++ ;
    i++ ;    
}
return count ;
}

int main()
{

    int i , j , k ;
    cout<<"Enter\n";
    cin>>i>>j>>k ;
    int result = beautifulDays(i, j, k);

    cout<<result;


    return 0;
}
