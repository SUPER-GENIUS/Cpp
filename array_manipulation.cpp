#include<bits/stdc++.h>
using namespace std ;
int main()
{
long N,M,a,b,c;
cin>>N>>M;

long int *arr=new long int[N+1];



for(long i=0;i<M;i++){
    cin>>a>>b>>c;
    arr[a]+=c;

    if(b+1<=N){
        arr[b+1]-=c;
    }
}

long x=0,ans=0;

for(long i=1;i<=N;i++){
    x+=arr[i];
    ans=max(ans,x);
}

cout<<ans;
return 0 ;
}