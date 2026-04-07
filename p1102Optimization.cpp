#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n,c,ans;
    ans = 0;

    cin>>n>>c;

    ll num[n + 1];

    for(ll i = 0;i < n;i ++){
        cin>>num[i];
    }

    sort(num,num + n);

    for(ll i = 0;i < n - 1;i ++){
        ll x,y,A;
        A = num[i];
        x = lower_bound(num,num + n, A + c) - num;
        y = upper_bound(num,num + n,A + c) - num;
        ans+=(y - x);
    }

    cout<<ans<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}