#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
#define pb push_back;
#define mkp make_pair;
#define all(v) v.begin(), v.end()
const int M = 1e9 + 7;
const int N = 1e5 + 5;
using namespace std;

ll ceil(ll a, ll b)
{
    if(a%b==0)
      return a/b;
    return a/b +1;
}
void solve()
{
   ll n,a=0,b=0,c,m,k,p,q,r,x,y,z,sum=0;
   double d1,d2,d3,d4;
   string s1,s2;
   vector<int> v1,v2;
   map<int,int> mp;
   set<int> s;
              
   cin>>n>>x;
   vector<ll> arr(n);
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
     a+=ceil(arr[i],x);
     sum+=arr[i];
   } 

   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!
                     
   b=ceil(sum,x);
   cout<<b<<" "<<a<<"\n";
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