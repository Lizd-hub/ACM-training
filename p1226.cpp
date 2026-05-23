#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    /*FastPow*/
    int x,n,p,ans = 1;

    cin>>x>>n>>p;

    int outx = x,outn = n;
    
    while(n > 0){
        if(n % 2 == 1){
            ans = ans * x % p;
        }
        x = x * x % p;
        n = n >> 1 % p;
    }

    cout<<outx<<"^"<<outn<<" mod "<<p<<"="<<ans % p;

    return 0;
}