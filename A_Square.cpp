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
   ll n,a,b,c,d,m,k,p,q,r,x,y,z;
   double d1,d2,d3,d4;
   string s1,s2;
   vector<int> v1,v2;
   map<int,int> mp;
   set<int> s;
              
   cin>>a>>b;
   cin>>c>>d;
   cin>>x>>y;
   cin>>p>>q;
  // for(int i=0;i<n;i++)
  //   cin>>arr[i];

   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!
                     
   if(b==d)
   {
     m=abs(a-c);
     cout<<m*m<<endl;
   }
   else if(b==y)
   {
     m=abs(a-x);
     cout<<m*m<<endl;
   }
   else
   {
     m=abs(a-p);
     cout<<m*m<<endl;
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