#include<bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
#define int long long

priority_queue<int, vector<int>,greater<int>> pq;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n;
    cin>>n;

    for(int i = 0;i < n;i ++){
        int cinx;
        cin>>cinx;
        pq.push(cinx);

    }

    int ans = 0;
    for(int i = 1;i < n;i ++){
        int x,y;
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        int temp = x + y;
        ans += temp;
        pq.push(temp);
    }
    
    cout<<ans;
     
    return 0;
}