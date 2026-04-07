#include<bits/stdc++.h>
#include <functional>
using namespace std;

#define ll long long

void f(ll* x,ll* y,ll n,ll m,ll c,ll* num);

void solve(){
    ll n,c,ans;
    ans = 0;

    cin>>n>>c;

    ll num[n + 1];

    for(ll i = 0;i < n;i ++){
        cin>>num[i];
    }

    sort(num,num + n,greater<ll>());

    for(ll i = 0;i < n - 1;i ++){
        ll x,y;
        f(&x,&y,i,n - 1,c,num);
        for(ll j = x;j <= y;j ++){
            if(num[i] - num[j] == c) ans++;
        }
    }

    cout<<ans<<endl;
}

void f(ll* x,ll* y,ll n,ll m,ll c,ll* num){
    *x = n;
    *y = m;
    ll pos;
    pos = (*x + *y)/2;
    while(*y - *x > 1){
        if(num[n] - num[pos] == c) return;

        if(num[n] - num[pos] > c){
            *y = pos;
            pos = (*x + *y)/2;
        }
        else if (num[n] - num[pos] < c) {
            *x = pos;
            pos = (*x + *y)/2;            
        }
        
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}