#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define int long long

const int maxn = 1005;
char mp[maxn][maxn];
int vis[maxn][maxn];
int dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1};
int cnt;
int n,m,q;

void dfs(int x,int y);
bool isFlood(int x,int y);

int countFlood(int x,int y){
    if(isFlood(x,y)) dfs(x,y);
    return cnt;
}

bool isFlood(int x,int y){
    for(int i = 0;i < 4;i ++){
        if(vis[x + dx[i]][y + dy[i]] == 1) return true;
    }
    return false;
}

void dfs(int x,int y){
    if(x < 0 || x > n + 1 || y < 0 || y > m + 1) return;

    if(mp[x][y] == '#') return;

    if(vis[x][y] == 1) return;

    if(x > 0 && x <= n && y > 0 && y <= m && vis[x][y] == 0 && mp[x][y] == '.'){
        cnt++;
    }

    vis[x][y] = 1;

    for(int i = 0;i < 4;i ++){
        int xx = x + dx[i];
        int yy = y + dy[i];
        dfs(xx,yy);
    }

    return;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    
    cin>>n>>m>>q;

    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cin>>mp[i][j];
        }
    }

    dfs(0,0);

    for(int i = 0;i < q;i ++){
        int x,y;
        cin>>x>>y;
        mp[x][y] = '.';

        cout<<countFlood(x,y)<<'\n';
    }
    return 0;
}