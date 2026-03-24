#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> num(n);
    int ans = n;

    for(int i = 0;i < n;i ++){
        cin>>num[i];
        if(i > 0)
            if(num[i - 1] > num[i]){
                ans = 1;
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