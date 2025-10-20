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
   ll n,a,b,c,m,k,p,q,r,x,y,z,sum=0;
   double d1,d2,d3,d4;
   string s1,s2;
   vector<int> v1,v2;
   map<int,int> mp;
   set<int> s;
              
   cin>>n;
   vector<int> arr(n), odd;
   for(int i=0;i<n;i++)
    cin>>arr[i];

   for(int i=0;i<n;i++)
   {
     if(arr[i]%2!=0)
       odd.push_back(arr[i]);
     else
       sum+=arr[i];
   }

   x = odd.size();
   if(x>0){
     sort(odd.begin(),odd.end());
     for(int i=x-1;i>=x/2;i--)
       sum+=odd[i];
   }
   else{
    cout<<0<<"\n";
    return;
   }

   cout<<sum<<"\n";
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