/*************************************************************************
	> File Name: 32.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 01:16:05 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define MAX_N  100000

int keep[MAX_N + 5] = {0};

int digit(int x){
    return log10(x) + 1;
}

int add_to_num(int x, int *num){
    while(x){
        if(num[x % 10]) return 0;
        num[x % 10] += 1;
        x /= 10;
    }
    return 1;
}

int is_val(int a, int b, int c){
    if(digit(a) + digit(b) + digit(c) - 9) return 0;
    int num[10] = {0};
    num[0] = 1;
    int flag = 1;
    flag = flag && add_to_num(a, num);
    flag = flag && add_to_num(b, num);
    flag = flag && add_to_num(c, num);
    return flag;
}

int main(){
    int sum = 0;
    for(int a = 1; a < 100; a++){
        for(int b = a; b < 10000; b++){
            if(!is_val(a, b, a * b)) continue;
            if(keep[a * b]) continue;
            sum += a * b;
            keep[a * b] = 1;
            printf("%d * %d = %d\n", a, b, a * b);
        }
    }
    printf("%d\n", sum);

}
