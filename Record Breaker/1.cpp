#include <bits/stdc++.h>
using namespace std;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
using Int = long long;
const char newl = '\n';

//INSERT ABOVE HERE
signed solve(){
  int n;
  cin>>n;
  vector<int> vs(n);
  for(int i=0;i<n;i++) cin>>vs[i];
  int ans=0,pre=-1;
  for(int i=0;i<n;i++){
    if(pre<vs[i] and (i+1==n or vs[i]>vs[i+1])) ans++;
    chmax(pre,vs[i]);
  }
  cout<<ans<<newl;
  return 0;
}

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  int T;
  cin>>T;
  for(int t=1;t<=T;t++){
    cout<<"Case #"<<t<<": ";
    solve();
  }
  return 0;
}

