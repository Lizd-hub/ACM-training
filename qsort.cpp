#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define int long long

const int maxn=1e5;
int num[maxn];

template <typename T>
void quick_sort(T arr[],const int len){
    if(len <= 1) return;
    const T pivot = arr[rand() % len];
    int i = 0,j = 0,k = len;
    while(i < k){
        if(arr[i] < pivot){
            swap(arr[i++],arr[j++]);
        }
        else if(arr[i] > pivot){
            swap(arr[i],arr[--k]);
        }
        else i++;
    }
    quick_sort(arr,j);
    quick_sort(arr + k,len - k);
}

signed main(){
    int N;
    cin>>N;
    for(int i = 0;i < N;i ++){
        cin>>num[i];
    }
    quick_sort(num,N);

    for(int i = 0;i < N;i ++){
        cout<<num[i]<<' ';
    }

    return 0;
}