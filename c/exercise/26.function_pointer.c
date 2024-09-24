/*************************************************************************
	> File Name: 26.function_pointer.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 23 Aug 2024 12:54:04 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void test1(){
    printf("function test1\n");
    return;
}

void test2(){
    printf("function test2\n");
    return;
}

void test3(){
    printf("function test3\n");
    return;
}

void (*p)();
int main(){
    srand(time(0));
    void (*arr[3])() = {test1, test2, test3};
    for(int i = 0; i < 10; i++){
        arr[rand() % 3]();
    }
    return 0;
}
