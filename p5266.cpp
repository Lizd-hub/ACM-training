#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll Q;
    cin>>Q;

    map<string,ll> stu;

    for(int i = 0;i < Q;i ++){
        int op;
        string name;
        cin>>op;
        if(op == 1){
            ll score;
            cin>>name>>score;
            stu[name] = score;
            cout<<"OK"<<'\n';
        }
        else if(op == 2){
            cin>>name;
            if(stu.count(name) == 1){
                cout<<stu[name]<<'\n';
            }else cout<<"Not found"<<'\n';
        }
        else if(op == 3){
            cin>>name;
            if(stu.count(name) == 1){
                stu.erase(name);
                cout<<"Deleted successfully"<<'\n';
            }else cout<<"Not found"<<'\n';            
        }
        else cout<<stu.size()<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    solve();
    
    return 0;
}