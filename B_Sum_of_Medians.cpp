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
              
   cin>>n>>k;
   vector<int> arr(n*k);
   for(int i=0;i<n*k;i++)
    cin>>arr[i];

   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!
                    
   ll interval = 0;//n-ceil(n/2)+1;
   if(n%2==0)
     interval = n-(n/2)+1;
   else
     interval = n-(n/2 +1)+1;
   ll i=n*k-interval;
   ll sum=0;
   while(k>0)
   {
      sum+=arr[i];
      k--;
      i=i-interval;
   }
   cout<<sum<<"\n";
   //cout<<ceil(n/2)<<endl;
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