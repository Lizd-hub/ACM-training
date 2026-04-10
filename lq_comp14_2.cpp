#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    // const double h =  11625907.5798;
    const double n = 23333333;
    // for(double i = 12305900;i < 12305950;i ++){//枚举1的个数
    //     double H;
    //     for(int j = 1;j <= i;j ++){
    //         H += -(i/n) * log2(i/n);
    //     }
    //     for(int q = 1;q <= n - i;q ++){
    //         H += -((n - i) / n) * log2((n - i) / n);
    //     }
    //     if(H < 11625907) continue;
    //     cout<<fixed<<setprecision(4)<<H<<' '<<h<<' '<<i<<endl;
    // }
    
    cout<<fixed<<n - 12305912<<endl;
    return 0;

}