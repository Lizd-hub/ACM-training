#include<bits/stdc++.h>
using namespace std;

#define int long long

int ct[200002];

void solve(){
    int n,k,q;
    cin>>n>>k>>q;


    for(int i = 0;i < n;i ++){
        int l,r;
        cin>>l>>r;

        for(int j = l;j <= r;j ++){
            ct[j]++;
        }
    }

    for(int i = 0;i < q;i ++){
        int a,b,ans;ans = 0;
        cin>>a>>b;

        for(int j = a;j <= b;j ++){
            if(ct[j] >= k) ans++;
        }
        cout<<ans<<'\n';
    }

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    solve();

    return 0;
}