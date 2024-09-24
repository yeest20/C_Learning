/*************************************************************************
	> File Name: hzoj114.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 06 Aug 2024 11:10:52 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    // HZoj114:他的名字
    char s[10];
    // 字符指针
    const char *name;
    scanf("%s", s);
    switch(s[0]){
        case 'h':name = "He";goto PRINT;
        case 'l':name = "Li";goto PRINT;
        case 'c':name = "Cao";goto PRINT;
        case 'd':name = "Duan";goto PRINT;
        case 'w':name = "Wang";goto PRINT;
PRINT:
    printf("%s\n", name);break;
        default: printf("Not Here\n");break;
    }

    return 0;
}
