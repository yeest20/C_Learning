/*************************************************************************
	> File Name: hzoj144.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 21 Aug 2024 10:36:23 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char str[105];
    scanf("%s", str);
    int count = 0;
    for(int i = 0; str[i]; i++){
        count += (str[i] == 'A');
    }
    printf("%d\n", count);
    //效率低写法：
    /*
     *for(int i = 0; i < strlen(str); i++)
     原因：每次循环判断i<strlen时，重新计算一遍strlen
     */
    
    return 0;
}
