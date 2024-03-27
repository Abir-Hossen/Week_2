#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s="Timru";
    int n;
    cin>>n;
    string y;
    cin>>y;
    sort(y.begin(),y.end());
    if(s==y)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

  }   
}