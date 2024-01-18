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
              
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++)
     cin>>arr[i];

   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!
                     
   bool flag=false;
   int i;
   for(i=1;i<n-1;i++)
   {
      if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
      {
        flag=true;
        break;
      }
   }
   if(flag)
   {
     cout<<"YES\n";
     cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
   }else
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