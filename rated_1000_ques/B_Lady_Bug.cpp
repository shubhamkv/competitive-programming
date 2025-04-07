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
   cin>>s1;
   cin>>s2;
   
   string str1="", str2;
   for(int i=0;i<n;i++)
   {
    if(i&1)
    {
       str1.push_back(s2[i]);
       str2.push_back(s1[i]);
    }
    else{
        str1.push_back(s1[i]);
        str2.push_back(s2[i]);
    }
   }

   int zero_1=0, zero_2=0;
   for(int i=0;i<str1.length();i++){
    if(str1[i]=='0')
      zero_1++;
   }

    for(int i=0;i<str1.length();i++){
    if(str2[i]=='0')
      zero_2++;
   }

   if(zero_1>=ceil(str1.length()/2.0) && zero_2>=(str2.length()/2))
     cout<<"YES"<<"\n";
   else
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