/*************************************************************************
	> File Name: hzoj142.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 07 Aug 2024 05:31:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
    // 质数回文数
    int a, b;
    bool f = true; // 记录是否是第一个输出
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        bool flag = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j) continue; 
            flag = false;
            break;
        }
        if(flag){
            int x = i, y = 0;
            while(x){
                y = y * 10 + x % 10;
                x = x / 10;
            }
            if(y == i) {
                if(!f) printf(" ");
                printf("%d", i);
                f = false;
            }
        }   
    }
    printf("\n");    

    return 0;
}
