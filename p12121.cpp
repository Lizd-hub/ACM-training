#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    const int N = 8100178706957568;
    int num,x;

    for(x = 11;x <= 36;x ++){
        int tag = 0;
        num = N;
        while(1){
            if(num % x > 9){
                tag = 1;
                break;
            }
            num /= x;
            if(num % x == num) break;
        }
        if(tag == 1) continue;
        if(tag == 0) break;
    }
    cout<<x<<endl;
}