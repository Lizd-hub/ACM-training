#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
const int N = 200001;
typedef long long ll;

struct num{
    int number;
    int w;
    string s;

    num(){
        number = 0;
        w = 0;
    }
};

num NUM[N];

int main(){
    ll n;
    cin>>n;
    for(int i = 0;i < n;i ++){
        cin>>NUM[i].number;
        NUM[i].s = to_string(NUM[i].number);
        for(int j = 0;j < NUM[i].s.size();j ++){
            if(NUM[i].s[j] == '0' || NUM[i].s[j] == '4' || NUM[i].s[j] == '6' || NUM[i].s[j] == '9')
                NUM[i].w ++;
            if(NUM[i].s[j] == '8')
                NUM[i].w += 2;
        }
    }
    

    
    // 排序: 先按w升序, w相同则按number升序
    sort(NUM, NUM + n, [](const num& a, const num& b){
        if(a.w != b.w) return a.w < b.w;
        return a.number < b.number;
    });

    for(int i = 0;i < n;i ++){
        cout<<NUM[i].number<<" ";
    }
    cout<<endl;

    return 0;
}