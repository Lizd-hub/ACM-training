#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    string s,t;

    getline(cin,s);

    int i = 0;

    while(i < s.length()){
        if(s[i] == 'D'){
            if(!t.empty())  t.pop_back();
            i++;
        }
        else{
            t.push_back(s[i++]);
            //t[j++] = s[i++]; 这是错误的，字符串添加不能用赋值的形式，
            // 要像一个数值一样 += 或者 push_back
        }
    }

    if(t.empty()){
        cout<<"!!!!";
    }
    else{
        cout<<t;
    }
    
    return 0;
}