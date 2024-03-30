#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        s.insert(m);
    }
    int cnt;
    cnt=s.size()-(n-s.size())%2;
    cout<<cnt<<endl;
  }   
}