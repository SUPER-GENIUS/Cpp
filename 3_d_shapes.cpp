#include<iostream>
#include<vector>
using namespace std;

int surface(vector<vector <int>> a , int h , int w)
{
    //top bottom surface
long sum = 2*h*w ;
int i,j;

for(j=0 ; j<w ; j++)
{
    sum+=a[0][j]+a[h-1][j] ;
    for( i=0 ; i<h-1 ; i++)
    {
        if(a[i][j]!=a[i+1][j])
        {
            sum+=abs(a[i][j]-a[i+1][j])  ;
        }
    }
}

for (i=0;i<h;i++)
{
    sum+=a[i][0]+a[i][w-1] ;
    for(j=0;j<w-1;j++)
    {
        if(a[i][j]!=a[i][j+1])
        {
        sum+=abs(a[i][j]-a[i][j+1]) ;
        } 
    }
}

return sum;
}

int main()
{
    int h,w;
    vector<vector <int>> a;
    cin>>h>>w ;
    for(int i=0 ; i<h ; i++)
    {
        vector<int> b(w);
        for(int j=0 ; j<w ; j++)
        {
            cin>>b[j];
        }
        a.push_back(b);
    }
    cout<<surface(a,h,w);
    return 0;
}