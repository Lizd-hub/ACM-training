#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll N = 1000000;

ll num[N];
ll countnum[N];
ll ans[N];

void solve(){
    ll n,m;
    
    cin>>n;

    for(int i = 1;i <= n;i ++){
        cin>>num[i];
        countnum[i] = countnum[i - 1] + num[i];
    }

    cin>>m;

    for(int i = 0;i < m;i ++){
        ll l,r;
        cin>>l>>r;
        ans[i] = countnum[r] - countnum[l - 1];

    }
    for(int i = 0;i < m;i ++){
        cout<<ans[i]<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}