#include <bits/stdc++.h>
#define l long 
using namespace std;


// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) 
{
vector<int> result(2);


int high,low;

low=scores[0];
high=scores[0];
cout<<scores.capacity();
for(int j=1;j<scores.size();j++)
{
  
    if(scores[j]<low)
    {
        low=scores[j];
        ++result[1];
    }
    else  if(scores[j]>high)                  
    {
        high=scores[j];
        ++result[0];
    }
    
}
return result;
}

int main()
{
    

    int n,s;
    cin >> n;
   vector<int> scores;

    for (int i = 0; i < n; i++) 
    {
        cin>> s;

        scores.push_back(s);
    }

    vector<int> result = breakingRecords(scores);
cout << "\n";


        cout << result[0]<<' '<<result[1];
    return 0;
}
