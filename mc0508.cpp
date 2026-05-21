#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define int long long

const int maxn = 10005;
int num[maxn];
unordered_map<int, int> cnt;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n,q;
    cin>>n>>q;

    for(int i = 1;i <= n;i ++){
        cin>>num[i];
    }

    for(int i = 0;i < q;i ++){
        int l,r,maxcnt = 0;
        cnt.clear();

        cin>>l>>r;

        for(int j = l;j <= r;j ++){
            cnt[num[j]]++;
            if(cnt[num[j]] > maxcnt) maxcnt = cnt[num[j]];
        }

        cout<<maxcnt<<'\n';
    }

    return 0;
}