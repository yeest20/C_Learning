/*************************************************************************
	> File Name: 13.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 14 Sep 2024 03:47:49 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

#define MAX_N  100

void transform_val(const char *str, int *ans){
    ans[0] = strlen(str);
    for(int i = 0; str[i]; i++){
        ans[ans[0] - i] = str[i] - '0';
    }
    return;
}

void add_big_num(int *a, int *b, int *ans){
    ans[0] = (a[0] > b[0]? a[0] : b[0]);
    for(int i = 1; i < ans[0] + 1; i++){
        ans[i] += a[i] + b[i];
        if(ans[i] < 10) continue;
        ans[i] %= 10;
        ans[i + 1] += 1;
        if(i == ans[0]) ans[0] += 1;
    }
    return;
}

int main(){
    char str_a[MAX_N + 5] = {0}, str_b[MAX_N + 5] = {0};
    scanf("%s%s", str_a, str_b);
    int a[MAX_N + 5] = {0}, b[MAX_N + 5] = {0};
    int ans[MAX_N + 5] = {0};
    transform_val(str_a, a);
    transform_val(str_b, b);
    add_big_num(a, b, ans);
    for(int i = ans[0]; i > 0; i--) printf("%d", ans[i]);
    printf("\n");
    return 0;
}
