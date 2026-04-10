#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int N,ans;ans = 0;
    cin>>N;

    for(int i = 1;i <= N;i ++){
        int tag = 0;
        string s = to_string(i);
        if(s.size() % 2 == 0){
            for(int j = 0;j <= s.size();j += 2){
                if(s[j] % 2 != 0){
                    tag = 1;
                    break;
                }
            }
            if(tag == 1) continue;
            for(int q = 1;q <= s.size();q += 2){
                if(s[q] % 2 != 1){
                    tag = 1;
                    break;
                }
            }
            if(tag == 1) continue;
            ans++;
        }
        else{
            for(int j = 0;j <= s.size();j += 2){
                if(s[j] % 2 != 1){
                    tag = 1;
                    break;
                }
            }
            if(tag == 1) continue;
            for(int q = 1;q <= s.size();q += 2){
                if(s[q] % 2 != 0){
                    tag = 1;
                    break;
                }
            }
            if(tag == 1) continue;
            ans++;            
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    solve();

    return 0;
}