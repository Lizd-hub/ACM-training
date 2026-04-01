#include <bits/stdc++.h>
using namespace std;

int MAP[100][100] = {0};
int position[20] = {-2,-1,-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2};

int find(int n,int m){
    if(n == 2 && m == 2) return 1;

    if(n - 1 >= 2 && m - 1 >= 2 && MAP[n - 1][m] != 1 && MAP[n][m - 1] != 1){
        return find(n - 1,m) + find(n,m - 1);
    }

    if(n - 1 >= 2 && MAP[n - 1][m] != 1){
        return find(n - 1,m);
    }

    if(m - 1 >= 2 && MAP[n][m - 1] != 1){
        return find(n,m - 1);
    }

    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

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
    
    int ans = find(n,m);

    cout<<ans<<endl;
    
    return 0;
}