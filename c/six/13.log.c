/*************************************************************************
	> File Name: 13.log.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 26 Aug 2024 11:16:27 PM CST
 ************************************************************************/

#include<stdio.h>

#define DEBUG 1
#define ERROR 2
#define FATEL 3
#define NO_LOG 4
//#define LOG_LEVEL  DEBUG
#define LOG(level)\
if(level >= LOG_LEVEL)\
printf("[%s : %d]", __FILE__, __LINE__),\
printf

int main(){
    int a = 123;
    printf("hello world");
    printf("a = %d\n", a);
    LOG(DEBUG)("hello world, DEBUG\n");
    LOG(ERROR)("hello world, DEBUG\n");
    LOG(FATEL)("hello world, DEBUG\n");
    LOG(DEBUG)("a = %d, DEBUG\n", a);
    LOG(DEBUG)("a = %d, ERROR\n", a);
    LOG(DEBUG)("a = %d, FATEL\n", a);

    return 0;
}
