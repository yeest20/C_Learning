/*************************************************************************
	> File Name: 13-2.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 14 Sep 2024 04:33:40 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 100

void transform(const char *str, int *a){
    a[0] = strlen(str);
    //printf("len = %d\n", a[0]);
    for(int i = 0; str[i]; i++){
        a[a[0] - i] = str[i] - '0';
        //printf("%d", a[a[0] - i]);
    }
    return;
}

void add_big_num(int *a, int *sum){
    int ans[MAX_N + 5] = {0}; 
    ans[0] = (sum[0] > a[0] ? sum[0] : a[0]);
    //printf("sum[0] = %d, a[0] = %d, ans[0] = %d\n", sum[0], a[0], ans[0]);
    for(int i = 1; i <= ans[0]; i++){
        ans[i] += a[i] + sum[i];
        if(ans[i] < 10) continue;
        ans[i] %= 10;
        ans[i + 1] += 1;
        if(i == ans[0]) ans[0] += 1;
    }
    for(int i = 0; i <= ans[0]; i++) {
        sum[i] = ans[i];
      //  printf("sum = %d\n", sum[i]);
    }
    //printf("\n");
    return;
}

int main(){
    char str[MAX_N + 5] = {0};
    int a[MAX_N + 5] = {0};
    int sum[MAX_N + 5] = {0};
    while(scanf("%s", str) != EOF){
        transform(str, a);
        add_big_num(a, sum);
    }
    printf("len = %d\n", sum[0]);
    for(int i = 0; i < sum[0]; i++) printf("%d", sum[sum[0] - i]);
    printf("\n");
    return 0;
}
