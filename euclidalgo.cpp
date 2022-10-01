#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
  //for fast input output
  ios_base::sync_with_stdio(false);cin.tie(NULL);
 
  // for taking input/output from file when not running on online coding platforms
 
  #ifndef ONLINE_JUDGE// if not defined ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif   // end if 
  
  int m,n,r;
  cin>>m>>n;

  if(n%m==0)
  {
    cout<<"GCD does not exist"<<endl;
  }
  else
  {
    while(n%m!=0)
    {
      r=n%m;
      n=m;
      m=r;
    }
    cout<<"GCD is = "<<m<<endl;
  }

  return 0;
   
}  
   