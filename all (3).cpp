#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vs vector<string>
int main() {
ll t;
cin>>t;
while(t--){
   ll n,x;
   cin>>n>>x;
   vector<ll> a(n);
   vector<ll> b(n);
   vector<ll> c(n);
   for(ll i=0;i<n;i++) cin>>a[i];
   for(ll i=0;i<n;i++) cin>>b[i];
   for(ll i=0;i<n;i++) cin>>c[i];
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   sort(c.begin(),c.end());
   vector<ll> ans;
   ans.push_back(a[0]);
   for(ll i=1;i<n;i++){
       if(a[i]!=a[i-1]) ans.push_back(a[i]);
   }
   ans.push_back(b[0]);
   for(ll i=1;i<n;i++){
       if(b[i]!=b[i-1]) ans.push_back(b[i]);
   }
   ans.push_back(c[0]);
   for(ll i=1;i<n;i++) {
       if(c[i]!=c[i-1]) ans.push_back(c[i]);
   }
   
   sort(ans.begin(),ans.end());
   vector<ll> v;
   v.push_back(ans[0]);
   for(ll i=1;i<ans.size();i++){
       if(ans[i]!=ans[i-1]) v.push_back(ans[i]);
   }
   
   sort(v.begin(),v.end());
   ll i=0;
   ll j=v.size()-1;
   bool e=false;
   while(i<j){
       ll y=(v[i]|v[j]);
       if(y==x){
           e=true;
           break;
       }
       else if(y>x) j--;
       else i++;
   }
   if(x==0){
       cout<<"YES"<<endl;
   }
  else  if(e){
       cout<<"YES"<<endl;
   }
   else {
       cout<<"NO"<<endl;
   }
}
return 0;
}
