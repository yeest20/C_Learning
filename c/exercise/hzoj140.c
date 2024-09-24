/*************************************************************************
	> File Name: hzoj140.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 07 Aug 2024 12:25:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    // 字母菱形
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 2 * n - 1; i++){
        int kongge_num = abs(i - n + 1);
        int zimu_num = 2 * n - 1 - 2 * abs(i - n +1);
        //printf("%d %d", kongge_num, zimu_num);
        for(int j = 0; j < kongge_num; j++) printf(" ");
        for(int k = 0; k < zimu_num; k++) printf("%c", 'A' + n - 1 - abs(i - n +1));
        printf("\n");
    }
        
    return 0;
}
