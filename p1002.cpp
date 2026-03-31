#include <bits/stdc++.h>
using namespace std;

int MAP[100][100] = {0};
int position[20] = {-2,-1,-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2};

int find(int n,int m){
    MAP[n][m] = 1;


    if(n - 1 >= 0 && m - 1 >= 0 && MAP[n - 1][m] != 1 && MAP[n][m - 1] != 1){
        return find(n - 1,m) + find(n,m - 1);
    }



}

int main(){
    ios::sync_with_stdio;
    cin.tie(0);
    cout.tie(0);

    int n,m,x,y;
    cin>>n>>m>>x>>y;

    for(int i = 0;i < 16;i += 2){
        MAP[x + position[i]][y + position[i + 1]] = 1;
    }

    return 0;
}