/*************************************************************************
	> File Name: 14.time.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 27 Aug 2024 11:38:09 AM CST
 ************************************************************************/

#include<stdio.h>
#include<time.h>
#define TIME(func){ \
    long long b = clock(); \
    func; \
    long long e = clock(); \
    printf("%s run %lldms\n", #func, 1000 * (e - b) / CLOCKS_PER_SEC); \
}
void test(int n){
    long long sum = 0;
    for(int i = 1; i <= n; i ++) sum += i;
    printf("sum = %lld\n", sum);

    return;
}
int main(){
    TIME(test(100000));
    TIME(test(1000000));
    TIME(test(10000000));

    return 0;
}
