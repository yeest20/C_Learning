/*************************************************************************
	> File Name: 9.print_100.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 12:36:54 PM CST
 ************************************************************************/

#include<stdio.h>
/* 
 * void print(int n){
    if(n == 1){
        printf("%d\n", n); return;
    }

    print(n - 1);
    printf("%d\n", n);
    return;
} 
*/
// 输出1-100
int cnt = 100;
int main(){
    int n = cnt;
    cnt -= 1;
    if(n == 1){
        printf("%d\n", n);
        return 0;
    }

    main();
    printf("%d\n", n);  
    return 0;
}
