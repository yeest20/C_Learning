/*************************************************************************
	> File Name: 14.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 12:00:38 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 100000000

int cntAll[MAX_N] = {0};

int main(){
    int ans = 0, len = 0;
    for(int i = 2; i < MAX_N; i++){
        int cnt = 0;
        long long n = i;
        do{
            if(n < MAX_N && cntAll[n] != 0){
                cnt += cntAll[n];
                break;
            }
            (n & 1) ? (n = 3 * n + 1) : (n = (n >> 1));
            cnt += 1;
        }while(n != 1);
        cntAll[i] = cnt;//记忆化
        if(cnt > len) 
        {   
            len = cnt;
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
