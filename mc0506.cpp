#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxn = 3005;
int num[maxn],less_i_front[maxn],less_i_back[maxn];


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n,ans = 0;
    cin>>n;

    for(int i = 1;i <= n;i ++){
        cin>>num[i];
    }

    for(int i = 1;i <= n;i ++){
        for(int j = 1;j < i;j ++){
            if(num[j] < num[i]) less_i_front[i]++;
        }
        for(int k = i + 1;k <= n;k ++){
            if(num[k] < num[i]) less_i_back[i]++;
        }
    }
    

    for(int i = 1;i <= n;i ++){
        for(int j = i + 1;j <= n;j ++){
            if(num[i] == num[j]){
                ans += less_i_front[i] * less_i_back[j];
                ans %= 10007;
            }
        }
    }

    cout<<ans;

    return 0;
}