#include <bits/stdc++.h>
using namespace std;

int find(int x){
    if(x == 1) return 1;

    if(x == 2) return 2;

    return find(x - 1) + find(x - 2);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int ans = 0;
    int N = 0;

    cin>>N;

    ans = find(N);
    
    cout<<ans<<endl;
    return 0;
}