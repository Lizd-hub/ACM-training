#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxn = 1005;
int MAP[maxn][maxn],vis[maxn][maxn];
int n,m;
int flag,hurt;
int dx[4] = {-1,0,1,0};int dy[4] = {0,1,0,-1};

void dfs(int x,int y){
    if(flag == 1) return;

    if(x == n){
        flag = 1;
        return;
    }

    for(int i = 0;i < 4;i ++){
        int tx = x + dx[i];int ty = y + dy[i];
        
        if(tx > 0 && tx <= n && ty > 0 && ty <= m && !vis[tx][ty] && MAP[tx][ty] <= hurt){
            vis[tx][ty] = 1;
            dfs(tx,ty);
            // vis[tx][ty] = 0; In this problem,actually we don't need to backtrack,
            //because we need to perform pruning optimization.
            
        }
        if(flag == 1) return;
    } 

    return;
}

signed main(){
    cin>>n>>m;

    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cin>>MAP[i][j];
        }
    }

    int l = 0,r = 1000;

    while(l + 1 < r){
        int mid = (l + r) >> 1;
        hurt = mid;
        memset(vis,0,sizeof(vis));
        flag = 0;
        vis[1][1] = 1;
        dfs(1,1);
        if(flag == 1) 
            r = mid;
        else
            l = mid;
    }

    cout<<r;
    return 0;
}