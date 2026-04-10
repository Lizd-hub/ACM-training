#include<bits/stdc++.h>
using namespace std;
void solveA();
void solveB();
int main() {
    // solveA();
    // solveB();

    string ans [] = {
        "1204", // 双引号中替换为 A 题的答案
        "1100325199.77", // 双引号中替换为 B 题的答案
    };
    char T;
    cin >> T;
    cout << ans[T - 'A'] << endl;
    return 0;
}

void solveA(){
    int ans = 0;
    for(int i = 43;i > 0;i --){
        ans += (i - 1);
    }
    ans += 7 * 43;
    cout<<ans<<endl;
}

void solveB(){
    const unsigned long long x = 343720 * 2,y = 233333 * 2,N = 20000;
    for(int i = 1;i < 20000;i ++){
        for(int j = 1;j < 20000;j ++){
            if(x * i * 17 == y * j * 15){
                cout<<fixed<<setprecision(2)<<sqrt((double)(x * i)*(x * i) + (y * j)*(y * j))<<endl;
                return;
            }
        }
    }

}

