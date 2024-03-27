#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
    for(int i=0;i<n;i++)
    {
     unordered_map<char,int>m;
    int k;
    cin>>k;
    for(int j=0;j<k;j++)
    {
        char c;
        cin>>c;
        m[c]++;
    }
    int b=m['U']-m['D'];
    if(b>0)
    {
        arr[i]=arr[i]-b;
        if(arr[i]<0)
        {
            arr[i]=arr[i]+10;
        }
    }
    else
    {
        b=abs(b);
        arr[i]=arr[i]+b;
        if(arr[i]>9)
        {
            arr[i]=arr[i]-10;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}