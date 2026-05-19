#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxn = 1005;
int MAP[maxn][maxn],vis[maxn][maxn];
int flag;

void dfs(){}

signed main(){
    int n,m;
    cin>>n>>m;

    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cin>>MAP[i][j];
        }
    }

    int l = 0,r = 1000;
    while(l + 1 < r){
        int mid = (l + r) >> 1;

    }
    return 0;
}