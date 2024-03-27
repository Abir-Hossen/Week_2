#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin>>n>>x;
  vector<long long int>s;
  for(int i=0;i<n;i++)
  {
   long long int y;
    cin>>y;
    s.push_back(y);
  } 
  
  for(auto value : s)
  {
    if(value!=x)
    {
        cout<<value<<" ";
    }    
  }
}