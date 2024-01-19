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
   ll n,m,k,p,q,r,x,y,z;
   double d1,d2,d3,d4;
   string a,b,c;
   vector<int> v1,v2;
   map<int,int> mp;
   set<int> s;
              
   cin>>n;
   cin>>a>>b>>c;

  // for(int i=0;i<n;i++)
  //   cin>>arr[i];

   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!
   bool flag=false;                 
   for(int i=0;i<n;i++)
   {
      if(a[i]!=c[i] && b[i]!=c[i])
        flag=true;
   }
   if(flag)
     cout<<"YES\n";
   else
     cout<<"NO\n";
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