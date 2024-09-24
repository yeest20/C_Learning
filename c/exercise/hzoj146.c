/*************************************************************************
	> File Name: hzoj146.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 21 Aug 2024 10:59:07 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(){
    char str[55];
    scanf("%s", str);
    for(int i = 0; str[i]; i++){
        if(str[i] == 'z' || str[i] == 'Z') {str[i] = str[i] - 25;continue;}
        if(isalpha(str[i])) str[i] += 1;
    }
    printf("%s\n", str);
    return 0;
}
