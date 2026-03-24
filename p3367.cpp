#include <iostream>
#include <vector>

using namespace std;

#define long long ll;
const int N = 200001;
int father[N];

struct bcj{
    int z,x,y;
    bcj(int z_,int x_,int y_):z(z_),x(x_),y(y_){}
};

int find(int u){
    if(u == father[u]) return u;
    else return father[u] = find(father[u]);
    //return u == father[u] ? u : father[u] = find(father[u]);
}


int main(){
    int n,m;
    cin>>n>>m; 
    vector<bcj> bcjs;

    //初始化并查集
    for(int i = 0;i < N;i ++){
        father[i] = i;
    }
    //读入m行数据
    int z,x,y;
    for(int i = 0;i < m; i++){
        cin>>z>>x>>y;
        bcjs.emplace_back(z,x,y);
    }
    //处理
    for(int i = 0;i < bcjs.size();i ++){
        bcj BCJ = bcjs[i];
        int fa = find(BCJ.x);
        int fb = find(BCJ.y);
        if(BCJ.z == 2){
            if(fa == fb) cout<<"Y"<<endl;
            else cout<<"N"<<endl;
        }
        else{
            father[fb] = fa;//将fb父节点指向fa，实现两个不同的联通集合并
        }
    }

    return 0;
}