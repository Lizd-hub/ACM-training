#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long

int num[2000][2000];//必须开全局,否则会爆栈

void solve(){
    int n,m,q,ans;ans = 0;
    memset(num,0,sizeof(num));

    cin>>n>>m>>q;

    for(int i = 1;i <=n;i ++){
        for(int j = 1;j <= m;j ++){
            cin>>num[i][j];
            num[i][j] = num[i][j] + num[i - 1][j] + num[i][j - 1] - num[i - 1][j - 1];//二维前缀和
        }
    }

    for(int i = 0;i < q;i ++){
        int u,v,x,y;
        cin>>u>>v>>x>>y;
        ans ^= num[x][y] - num[u - 1][y] - num[x][v - 1] + num[u - 1][v - 1]; 
    }
    cout<<ans<<'\n';

    return;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--) solve();

    return 0;
}