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
        double a,b;
        cin>>a>>b;
        if(floor(a/b) < maxnum) maxnum = floor(a/b);
        if(ceil(a/(b + 1)) > minnum) minnum = ceil(a/(b + 1));
    }
    
    cout<<minnum<<' '<<maxnum;
    return 0;
}