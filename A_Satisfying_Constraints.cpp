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
   int n,a,b,c,m,k,p,q,r,x,y,z;
   double d1,d2,d3,d4;
   string s1,s2;
   vector<int> v1,v2;
   map<int,int> mp;
   set<int> s;
              
   cin>>n;
   int less=INT_MAX, great=INT_MIN;
   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!
                     
   while(n--)
   {
      cin>>a>>x;
      if(a==3)
        s.insert(x);
      else if(a==2)
        less=min(less,x);
      else
        great=max(great,x);
   }
   int cnt=0;
   for(auto it: s)
   {
      if(it>=great && it<=less)
        cnt++;
   }
   cout<<max(less-great-cnt+1,0)<<endl;
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