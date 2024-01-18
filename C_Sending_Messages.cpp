#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
#define pb push_back;
#define mkp make_pair;
#define all(v) v.begin(), v.end()
const int M = 1e9 + 7;
const int N = 1e5 + 5;
using namespace std;
void solve()
{
   ll n,a,b,c,m,k,p,q,r,x,y,z,f;
   double d1,d2,d3,d4;
   string s1,s2;
   vector<int> v1,v2;
   map<int,int> mp;
   set<int> s;
              
   cin>>n>>f>>a>>b;
   vector<ll> arr(n);
   for(int i=0;i<n;i++)
     cin>>arr[i];

   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!
                     
   if(a>=b)
   {
      if(n*b<f) 
        cout<<"YES\n";
      else
        cout<<"NO\n";
   }
   else
   {
      ll prev=0, left=f;
      bool flag=true;
      for(int i=1;i<=n;i++)
      {
        left=max(left-(a*(arr[i-1]-prev)),left-b);
        prev=arr[i-1];
        if(left>0)
          continue;
        else
        {
            flag=false;
            break;
        }
      }
      if(flag)
        cout<<"YES\n";
      else
        cout<<"NO\n";
   }
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll t,a,b,c;
   cin>>t;
   while(t--)
   {
        solve();
   }
   return 0;
}