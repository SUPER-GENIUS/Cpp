#include<bits/stdc++.h>

using namespace std;
int main()
{
    cout<<"Enter\n";
    int q,x,y,z;
    cin>>q;
    while(q--)
    {
        cin>>x;
        cin>>y;
        cin>>z;
        if(abs(x-z)==abs(y-z))
            cout<<"Mouse C";
        else if(abs(x-z)<abs(y-z))
            cout<<"Cat A" ;
        else cout<<"Cat B";      
    }
    return 0 ;

}