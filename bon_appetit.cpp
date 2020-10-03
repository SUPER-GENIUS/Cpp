#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> item;
    int n , k ,b , total=0;
    cin>>n>>k ;
    for(int x,i=0;i<n;i++)
    {
        cin>>x;
        item.push_back(x) ;
        if(i!=k)
        total+=x ;
    }
    cin>>b;
    if(total/2==b)
    cout<<"Bon Appetit";
    else cout<<(b-total/2);
}
