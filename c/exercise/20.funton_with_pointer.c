/*************************************************************************
	> File Name: 20.funton_with_pointer.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 22 Aug 2024 04:34:33 PM CST
 ************************************************************************/

#include<stdio.h>
void add_once(int* p){
    *p += 1;
    return;
}

void f(int n, int* sum_addr){
    *sum_addr = (1 + n) * n / 2;
}

void output(int* p, int n){
    for (int i = 0; i < n; i++){
    printf("p[%d] = %d\n", i, p[i]); // p[i] = *(p + i)
    }
    return;

}
// 指针在函数中作用
int main(){
    // 1. 改变实参值
    int a = 123;
    printf("a = %d\n", a);
    add_once(&a);
    printf("a = %d\n", a);
    // 2. 传出参数
    int n = 10, sum;
    f(n, &sum);
    printf("%d\n", sum);
    // 3. 接收数组参数
    int arr[10] = {9, 8, 5, 3, 6, 2, 1, 0, 4, 7};
    output(arr, 10);
    return 0;}
