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
              
   cin>>n>>m;
  
   vector<vector<int>> arr(n, vector<int>(m));
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<m;j++) 
      cin>>arr[i][j];
   }

  for(auto &row: arr)
    sort(row.begin(),row.end());
  
  vector<pair<int,int>> temp;
  for(int i=0;i<n;i++)
  {
    temp.push_back({arr[i][0],i+1});
  }
  sort(temp.begin(),temp.end());

  sort(arr.begin(),arr.end(), [](const vector<int> &a, const vector<int> &b){
    return a[0]<b[0];
  });

  int val=0;
  for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
      if(arr[i][j] == val)
      {
        val++;
        continue;
      }
      else{
       cout<<-1<<"\n";
        return;
      } 
    } 
  }

  for(auto it: temp)
    cout<<it.second<<" ";
   cout<<"\n";
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