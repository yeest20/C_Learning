/*************************************************************************
	> File Name: 27.memory.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 23 Aug 2024 02:09:54 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
    srand(time(0));
    // malloc(n)
    int* arr1= (int*)malloc(sizeof(int) * 10); // 保证不同操作系统兼容性
    for(int i = 0; i < 10; i++){
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    
    // calloc(n,k)
    int* arr2 = (int*) calloc(10, sizeof(int));
    for(int i = 0; i < 10; i++){
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }
    free(arr1);
    free(arr2);
   
    //memcpy  memmove
    char s1[100] = "hello world";
    char s2[100];
    char s3[100];
    memcpy(s2, s1, 12);
    memmove(s3, s1, 12);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    // 有重叠
    memcpy(s2 + 4, s2, 12);
    memmove(s3 + 4, s3, 12);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    return 0;
}
