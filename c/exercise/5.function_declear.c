/*************************************************************************
	> File Name: 5.function_declear.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 18 Aug 2024 08:50:41 PM CST
 ************************************************************************/

#include<stdio.h>
// 先声明
int b_func(int x);

int a_func(int x){
    switch (x){
        case 1: return b_func(x);
        case 2:printf("2 * x = %2d\n", 2 * x); break;
    }
    return 0;
}

int b_func(int x){
    switch (x){
        case 1: printf("3 * x = %d\n", 3 * x);break;
        case 2:return a_func(x);
    }
}
int main(){
    a_func(1);    
    b_func(2);

    return 0;
}
