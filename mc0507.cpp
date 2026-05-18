#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 105;

int S[maxn][maxn];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int n,m;
    cin>>n>>m;

    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            int x;
            cin>>x;
            S[i][j] = x + S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1];
        }
    }

    int ans = 0;

    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            for(int u = 1;u <= n;u ++){
                for(int v = 1;v <= m;v ++){
                    if(u < i || v < j) continue;
                    if(u == i && v == j){
                        if(S[i][j] - S[i - 1][j] - S[i][j - 1] + S[i - 1][j - 1] == 1) ans++;
                    }

                    if()    
                    

                }
            }
        }
    }
    return 0;
}