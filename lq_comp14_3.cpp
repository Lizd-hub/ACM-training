#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int N;
    cin>>N;
    
    int maxnum = 99999999;int minnum = 0;

    for(int i = 0;i < N;i ++){
        int a,b;
        cin>>a>>b;
        if((a/b) < maxnum) maxnum = (a/b);
        if(a/(b + 1) + 1 > minnum) minnum = a/(b + 1) + 1;
    }
    
    cout<<minnum<<' '<<maxnum;
    return 0;
}