/*************************************************************************
	> File Name: 8.getchar.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 07:19:48 PM CST
 ************************************************************************/

#include<stdio.h>


int main(){
    int a, b;
    scanf("%d%d", &a, &b);
#ifdef GETCHAR
    getchar();
#endif
#ifdef FFLUSH
    fflush(stdin);
#endif
    char c = 'x';
    scanf("%c", &c);
    printf("%d %d %c\n", a, b, c);
    return 0;
}
