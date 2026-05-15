#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

int mx[200001];
int my[200001];

signed main(){
    int n,ans,x,y;
    ans = -1;
    cin>>n;

    int i,j;
    for(i = 0,j = 0;i < n;i ++){
        cin>>mx[j]>>my[j];
        int xlength,ylength;
        cin>>xlength>>ylength;
        mx[j + 1] = mx[j] + xlength - 1;
        my[j + 1] = my[j] + ylength - 1;
        j += 2;
    }

    cin>>x>>y;
    
    for(i = 0,j = 0;i < n;i ++){
        if(mx[j] <= x && x <= mx[j + 1] && my[j] <= y && y <= my[j + 1]){
            ans = i + 1;
        }
        j += 2;
    }

    cout<<ans;

    return 0;
}