/*************************************************************************
	> File Name: 25.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 14 Sep 2024 06:47:00 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000

int fn[2][MAX_N + 5] = {0};

void add_big_num(int *a, int *sum){
    int ans[MAX_N + 5] = {0}; 
    ans[0] = (sum[0] > a[0] ? sum[0] : a[0]);
    for(int i = 1; i <= ans[0]; i++){
        ans[i] += a[i] + sum[i];
        if(ans[i] < 10) continue;
        ans[i] %= 10;
        ans[i + 1] += 1;
        if(i == ans[0]) ans[0] += 1;
    }
    for(int i = 0; i <= ans[0]; i++) {
        sum[i] = ans[i];
    }
    return;
}
int main(){
    fn[0][0] = 1; fn[0][1] = 1;
    fn[1][0] = 1; fn[1][1] = 1;
    int cnt = 2;
    while(1){
        cnt++;
        int temp[MAX_N + 5] = {0};
        for(int i = 0; i <= fn[1][0]; i++) temp[i] = fn[1][i];
        add_big_num(fn[0], fn[1]); 
        for(int i = 0; i <= temp[0]; i++) fn[0][i] = temp[i];
        if(fn[1][0] == 1000) {
            printf("%d\n", cnt);
            break;
        }

    }

    return 0;
}
