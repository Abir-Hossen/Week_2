#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    int mn=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
       for(int k=i+1;k<n;k++)
       {
        int sum=0;
        for(int j=0;j<m;j++)
        {
           int d= v[i][j]-'a';
           int e=v[k][j]-'a';
           d=d-e;
          d= abs(d);
           sum=sum+d;
        }
        mn=min(mn,sum);
       }
    }
    cout<<mn<<endl;
  }

}