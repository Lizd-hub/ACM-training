#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
const int N = 100001;
int father[N];
int num[N];

struct edge{
    int u,v,w;
    edge(int u_,int v_,int w_):u(u_),v(v_),w(w_){}
};

//并查集，路径优化
int find(int u){
    if(u == father[u]) return u;
    else return father[u] = find(father[u]);
    //三元表达式写法
    //return u == father[u] ? u : father[u] = find(father[u]);
}


int main(){
    int n,m,l,r;
    ll ans = 0;//无读入变量记得初始化
    cin>>n>>m>>l>>r; 
    vector<edge> edges;

    //初始化并查集
    for(int i = 0;i < N;i ++){
        father[i] = i;
        num[i] = 1;
    }

    //读入m行数据
    int u,v,w;
    for(int i = 0;i < m; i++){
        cin>>u>>v>>w;
        edges.emplace_back(u,v,w);//和push_back一样
    }

    //处理
    sort(edges.begin(),edges.end(),[](const edge& a,const edge& b){
        return a.w<b.w;//自定义comp函数
    });

    for(int i = 0;i < edges.size();i ++){
        edge Edge = edges[i];
        if(Edge.w > r) break;
        int fa = find(Edge.u);
        int fb = find(Edge.v);
        if(fa != fb){
            if(Edge.w >= l && Edge.w <= r){
                ans += num[fa]*num[fb];
            }
            father[fb] = fa;//并查集合并
            num[fa] += num[fb];//更新新父节点下节点数目（包含父节点自身）
        }
    }

    cout<<ans<<endl;

    return 0;
}