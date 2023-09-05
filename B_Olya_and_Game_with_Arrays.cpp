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
   int mini=INT_MAX;
   ll sum=0;
              
   cin>>n;
   for(int i=0;i<n;i++)
   {
      cin>>m;
      vector<int> arr(m);
      for(int j=0;j<m;j++)
      {
        cin>>arr[j];  
      }
      int minimum = *min_element(all(arr));
      mini = min(mini,minimum);
      sort(all(arr));
      //int mini = min(mini,arr[0]);
      v1.push_back(arr[1]);
      sum+= arr[1];
   }
   int mini2 = *min_element(all(v1));
   //cout<<mini<<" "; 
   cout<<(sum) + mini - mini2<<endl;
   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!
                     
   
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