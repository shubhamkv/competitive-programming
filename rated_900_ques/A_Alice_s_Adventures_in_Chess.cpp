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
   ll n,a,b,c,m,k,p,q,r,x,y,z;
   double d1,d2,d3,d4;
   string s1,s2;
   vector<int> v1,v2;
   map<int,int> mp;
   set<int> s;
              
   cin>>n>>a>>b;
   cin>>s1;

   x=0,y=0;             
   for(int i=0;i<21;i++)
   {
    for(char c: s1)
    {
      if(c=='N')
        y=y+1;
      else if(c=='S')
        y=y-1;
      else if(c=='E')
        x=x+1;
      else
        x=x-1;
     if(x==a && y==b)
     {
      cout<<"YES"<<"\n";
      return;
     }
    }
   }
   cout<<"NO"<<"\n";
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