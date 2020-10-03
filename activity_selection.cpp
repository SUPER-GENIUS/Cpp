#include<bits/stdc++.h>
using namespace std;
bool compare(vector <int> a , vector <int> b)
{
    return a[1]<b[1] ;
}
int main()
{
    vector<vector<int>> act ;
    int n ,i ,j,m=0;
    cout<<"Enter the no. of elements to be inserted\n" ;
    cin>>n;
    for(i=0 ;i<n ;i++)
    {
        vector<int> b(2);
        cout<<"ENTER stating time and finishing time for activity "<<i+1<<endl;
        cin>>b[0] ;
        cin>>b[1] ;
        act.push_back(b);
    }
    sort( act.begin(),act.end(),compare);
    cout<<"ACTIVITY TABLE\n";
    for(j=0 ;j<2 ;j++)
    {
        for(i=0 ;i<n ;i++)
    {   
        cout<<act[i][j] << " ";
    }
    cout<<endl ;
    }
    vector<int> select;

    select.push_back(m) ;
    for(i=1 ;i<n ;i++){
            if(act[i][0]>=act[m][1]){
                    m=i;
                    select.push_back(m) ;
                }
        }
    cout<<"Selected activites are:\n";    
    for(int i=0;i<select.size();i++)
        cout<<select[i] ;
}