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
   vector<ll> arr(n);
   for(int i=0;i<n;i++)
    cin>>arr[i];

   if(n==2){
    cout<<arr[n-1]-arr[n-2]<<"\n";
    return;         
   }

   ll i=n-2,j=n-3;
   while(j>=0){
     ll temp = arr[i]-arr[j];
     arr[i]=temp;
     j--;
   }
   cout<<arr[n-1]-arr[n-2]<<"\n";
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