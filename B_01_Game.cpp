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
              
   cin>>s1;
   n=s1.size();
  // for(int i=0;i<n;i++)
  //   cin>>arr[i];

   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!

   ll i=0, j=1, cnt=0, cnt_zero=0, cnt_one=0;  
   for(int i=0;i<n;i++)
   {
      if(s1[i]=='0')
        cnt_zero++;
      else
        cnt_one++;
   }              
//    while(i<n && j<n)
//    {
//       if(s1[i]!=s1[j])
//       {
//          cnt++;
//          i+=2;
//          j+=2;
//       }
//       else
//       {
//          i++;
//          j++;
//       }
//    }
   
    if(min(cnt_one,cnt_zero)%2==0)
        cout<<"NET\n";
    else
        cout<<"DA\n";
  
//    else if(cnt%2==0)
//      cout<<"NET\n";
//    else
//      cout<<"DA\n";
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