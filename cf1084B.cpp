#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> num(100);
    for(int i = 0;i < n;i ++){
        cin>>num[i];
    }

    int ans = 1;
    int j = 0;
    while(j < num.size()){
        
        if(j + 1 < num.size()){

            cout<<num[num.begin()]<<num[j]<<' '<<num[j + 1]<<endl;
            
            if(num[j] >= num[j + 1] && j > 0){ 
            num.erase(num.begin() + j + 1);
            if(j == 1) num.erase(num.begin() ,num.begin()+ j - 1);
            else num.erase(num.begin());
            j = 0;
            ans = 1;
            continue;
            }

            if(num[j] >= num[j + 1] && j == 0){
            num.erase(num.begin() + j + 1);
            j++;
            continue;
            }
        
        }
        j++;
        ans++;
    }

    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}