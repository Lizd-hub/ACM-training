#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[100];
    for(int i = 0;i < n;i ++){
        cin>>a[i];
    }

    sort(a, a + n,[](const int& x,const int& y){
        return x > y;
    });

    int max = a[0];
    int ans = 1;
    for(int i = 1;i < n;i ++){
        if(a[i] == max){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}