/*************************************************************************
	> File Name: hzoj141.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 07 Aug 2024 05:12:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    // 沙漏型输出
    int n;
    scanf("%d", &n);
    for(int i = 0; i <2 * n + 1; i++){
        int k_num = n - abs(i - n);
        int z_num = 1 + 2 * abs(i - n);
        for(int j = 0; j < k_num; j++) printf(" ");
        for(int k = 0; k < z_num; k++) printf("%c", 'A' + n - abs(i - n) + (z_num - 1) / 2 - abs(k - (z_num - 1) / 2));
    // printf("%d %d %d\n", i, k_num, z_num);
        printf("\n");
    }

    return 0;
}
