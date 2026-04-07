#include <bits/stdc++.h>
using namespace std;

long long MAP[100][100] = {0};//全局初始化置0，写不写{0}不影响
long long memo[100][100];
long long position[20] = {-2,-1,-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2};

long long find(int n,int m){
    if(n == 2 && m == 2) return 1;
    if(memo[n][m] != -1) return memo[n][m];
    int ans = 0;

    if(n - 1 >= 2 && m - 1 >= 2 && MAP[n - 1][m] != 1 && MAP[n][m - 1] != 1){
        ans = find(n - 1,m) + find(n,m - 1);
    }
    else if(n - 1 >= 2 && MAP[n - 1][m] != 1){
        ans = find(n - 1,m);
    }
    else if(m - 1 >= 2 && MAP[n][m - 1] != 1){
        ans = find(n,m - 1);
    }

    memo[n][m] = ans;

    return ans;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    memset(memo,-1,sizeof(memo));

    int n,m,x,y;
    cin>>n>>m>>x>>y;

    //坐标系整体向右下方平移2个单位，避免越界访问（RE or UB）
    n += 2;
    m += 2;
    x += 2;
    y += 2;

    MAP[x][y] = 1;

    for(int i = 0;i < 16;i += 2){
        MAP[x + position[i]][y + position[i + 1]] = 1;
    }
    
    long long ans = find(n,m);

    cout<<ans<<endl;
    
    return 0;
}