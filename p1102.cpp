#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxn = 2e5 + 5;
int num[maxn];

int findpos(int C,int n);

void solve(){
    int n,c,ans;
    ans = 0;

    cin>>n>>c;

    for(int i = 0;i < n;i ++){
        cin>>num[i];
    }

    sort(num,num + n,greater<int>());

    int pos = findpos(c,n);
    int upperbound,lowerbound;
    upperbound = lowerbound = pos;
    while(num[0] - num[upperbound] <= c) upperbound++;
    while(num[0] - num[lowerbound - 1] == c) lowerbound--;
    ans += upperbound - lowerbound;

    for(int i = 1;i < n;i ++){
        if(num[i] < c) break;

        while(num[i] - num[upperbound] <= c && upperbound < n) upperbound++;
        while(num[i] - num[lowerbound] < c && lowerbound < n) lowerbound++;
        ans += upperbound - lowerbound;
    }

    cout<<ans<<endl;
}

int findpos(int C,int n){
    int l = 0,r = n - 1;
    while(r - l > 1){
        int povt = (l + r) >> 1;
        if(num[0] - num[povt] >= C) r = povt;
        if(num[0] - num[povt] < C) l = povt;
    }
    return r;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}