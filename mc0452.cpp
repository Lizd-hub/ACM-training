#include <bits/stdc++.h>
using namespace std;
#define int long long

const int maxn = 1e6 + 5;
int father[maxn];

void init_fa(){
    for(int i = 1;i <= maxn;i ++){
        father[i] = i;
    }
    return;
}

int find(int u){
    return u == father[u] ? u : father[u] = find(father[u]);
}

void join(int x,int y){
    x = find(x);
    y = find(y);
    if(x == y) return;
    father[y] = x;
}

bool isSame(int x,int y){
    x = find(x);
    y = find(y);
    return x == y;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    
    init_fa();

    for(int i = 0;i < m;i ++){
        int op,x,y;
        cin>>op>>x>>y;
        if(op == 1){
            join(x,y);
        }
        else if(op == 2){
            if(isSame(x,y)){
                cout<<"YES"<<'\n';
            }
            else cout<<"NO"<<'\n';
        }
    }

    return 0;
}