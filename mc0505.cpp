#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 1e4;

int diff[maxn],num[maxn];

signed main(){
    int n,q;
    cin>>n>>q;

    for(int i = 1;i <= n;i ++){
        cin>>num[i];
        diff[i] = num[i] - num[i - 1];
    }

    for(int i = 0;i < q;i ++){
        int op,l,r,x;
        cin>>op;

        if(op == 1){
            cin>>l>>r>>x;
            diff[l] += x;
            diff[r + 1] -= x;
        }
        else if(op == 2){
            cin>>l>>r>>x;

            for(int j = 1;j <= n;j ++){
                num[j] = diff[j] + num[j - 1];
            }

            for(int j = l;j <= r;j ++){
                if(num[j] > x) num[j] = x;
            }

            for(int j = 1;j <= n;j ++){
                diff[j] = num[j] - num[j - 1];
            }
        }   
        else if(op == 3){
            cin>>l>>r;
            
            int ans = 0;

            for(int j = 1;j <= n;j ++){
                num[j] = diff[j] + num[j - 1];
            }

            for(int j = l;j <= r;j ++){
                ans += num[j];
            }
            cout<<ans<<'\n';
        }
    }

    return 0;
}