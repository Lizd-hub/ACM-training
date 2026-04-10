#include<bits/stdc++.h>
using namespace std;

#define int long long

int ct[200002];

void solve(){
    int n,k,q,max;max = 0;
    cin>>n>>k>>q;

    for(int i = 0;i < n;i ++){
        int l,r;
        cin>>l>>r;
        ct[l] += 1;ct[r + 1] -= 1;
        if(r > max) max = r;//记录最大端点，减少循环次数
    }

    for(int i = 1;i <= max;i ++){//差分实现所有区间更改
        ct[i] = ct[i - 1] + ct[i];
    }

    for(int i = 1;i <= 200000;i ++){//前缀和一定要全遍历，否则会出现b - a < 0或者遗漏计数
//对于配方覆盖大于2的温度加1标记为合适的温度，
// 那么后续的查询只要查询计数目标区间被标记为合适的温度个数，
// 求一段区间的计数和->前缀和
        if(ct[i] >= k) ct[i] = 1 + ct[i - 1];
        else ct[i] = 0 + ct[i - 1]; 
    }

    for(int i = 0;i < q;i ++){
        int a,b;
        cin>>a>>b;
        cout<<ct[b] - ct[a - 1]<<'\n';
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    solve();

    return 0;
}