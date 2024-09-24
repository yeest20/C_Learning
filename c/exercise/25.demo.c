/*************************************************************************
	> File Name: 25.demo.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 23 Aug 2024 11:44:26 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int *p = arr;
    for(int i = 0; i < 3; i++){
        printf("%d\n", (i + 5)[&p[1] - 2]);
    }
    return 0;
}
