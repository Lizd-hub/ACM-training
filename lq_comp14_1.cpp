//以下注释代码为错解，题意为求非连续子序列满足要求，错解为求连续子序列

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int ans = 0;

//     int num[110];

//     for(int i = 1;i <= 100;i ++){
//         cin>>num[i];
//     }

//     int x,y;
//     for(x = 1,y = 8;y <= 100;x ++,y ++){
//         int month,date;
//         if(num[x] != 2) continue;
//         if(num[x] == 2 && num[x + 1] == 0 && num[x + 2] == 2 && num[x + 3] == 3){
//             month = num[x + 4] * 10 + num[x + 5];
//             if(month > 0 && month < 13){
//                 date = num[y - 1] * 10 + num[y];
//                 if(month == 2){
//                     if(date > 0 && date < 29) ans++;
//                 }
//                 else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12){
//                     if(date > 0 && date < 32) ans++;
//                 }
//                 else if(month == 4 || month == 6 || month == 9 || month == 11){
//                     if(date > 0 && date < 31) ans++;
//                 }
//             }
//         }
//     }
//     cout<<ans<<endl;
// }
//

#include <iostream>
using namespace std;
int main()
{
  int month,day,i,j,sum=0;
  int  a[100]={5,6,8,6,9,1,6,1,2,4,9,1,9,8,2,3,6,4,7,7,5,9,5,0,3,8,7,5,8,1,5,8,6,1,8,3,0,3,7,9,2,
               7,0,5,8,8,5,7,0,9,9,1,9,4,4,6,8,6,3,3,8,5,1,6,3,4,6,7,0,7,8,2,7,6,8,9,5,6,5,6,1,4,
               0,1,0,0,9,4,8,0,9,1,2,8,5,0,2,5,3,3};
    for(month=1;month<=12;month++)
    {
        if(month==2)
          day=28;
        else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
          day=31;
        else
          day=30;
        for(int d=1;d<=day;d++) 
        {
            j=0;
            int b[8]={2,0,2,3,month/10,month%10,d/10,d%10};
            for(i=0;i<100;i++)
            {
                if(a[i]==b[j])
                  j++;
                if(j==8)
                  {
                      sum++;
                    break;
                  }
            }
        }
    }    
    cout<<sum; 
  return 0;
}