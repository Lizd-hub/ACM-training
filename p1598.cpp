#include <cctype>
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int letternum[30] = {0};
int perlinemax[1000] = {0};
// char printmap[400][400] = {' '};

int main(){
    string s;
    for(int i = 0;i < 4;i ++){
        getline(cin,s);
        for(int j = 0;j < s.size();j ++){
            if(!isupper(s[j])) continue;
            letternum[s[j] - 'A'] ++;
        }
    }
    
    int N = *max_element(letternum,letternum + 26);
    int k = N;

    for(int i = 0;i < N;i ++){
        for(int j = 0;j < 26;j ++){
            if(letternum[j] >= k) perlinemax[i] ++;
        }
        k--;
    }
    
    k = N;
    int t;
    for(int i = 0;i < N;i ++){
        t = 1;
        for(int j = 0;j < 26;j ++){
            if(letternum[j] >= k && t < perlinemax[i]){
                printf("* ");
                t++;
                continue;
            } 
            if(letternum[j] >= k && t == perlinemax[i]){//末尾处理
                printf("*\n");
                break;
            }
            printf("  ");
        }
        k--;
    }

    for(int i = 0;i < 26;i ++){
        printf("%c",'A'+i);
        if(i == 25) break;
        printf(" ");
    }


    // for(int i = 0;i < 26;i ++){
    //     k = N - 1;
    //     for(int j = 0;j < letternum[i];j ++){
    //         printmap[k][i*2] = '*';
    //         k --;
    //     }
    // }

    // for(int i = 0;i < 26;i ++){
    //     printmap[N][2*i] = 'A' + i;
    // }

    // for(int i = 0;i < N + 1;i ++){
    //     for(int j = 0;j < 51;j ++){
    //         printf("%c",printmap[i][j]);
    //     }
    //     if(i == N) break;
    //     printf("\n");
    // }

    return 0;
}