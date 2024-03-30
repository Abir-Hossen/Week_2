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
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='R')
        {
            if(s2[i]!='R')
            {
                cnt=1;
                break;
            }
        }
        else if(s2[i]=='R')
        {
            if(s1[i]!='R')
            {
                cnt=1;
                break;
            }
        }
    }
    if(cnt)
    {
        cout<<"NO"<<endl;
    }
    else
    cout<<"YES"<<endl;
  }   
}