#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int> > v(6,vector < int> (6,0)) ;
    for(int i =0 ; i<6;i++)
        {
            for(int j=0 ;j<6 ; j++)
                cout<<v[i][j]<<" " ;
            cout<<endl ;    
        } 
}