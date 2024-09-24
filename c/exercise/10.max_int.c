/*************************************************************************
	> File Name: 10.max_int.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 02:11:45 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
#include<inttypes.h>
int max_int(int n, ...){
    va_list args;       //获取参数列表
    va_start(args, n);  //获取第一个变参 args：参数列表，n：数量参数
    int ans = INT32_MIN;
    for(int i = 0; i < n; i++){
        int a = va_arg(args, int); // 获取当前变参位置：va_arg(参数列表， 取出类型)
        if(a > ans) ans = a;
    }
    va_end(args); // 关闭列表
    return ans;


}

int main(){
    printf("max_int(3,8,7,9) = %d\n", max_int(3,8,7,9));
    printf("max_int(2,8,7,9) = %d\n", max_int(2,8,7,9));
    return 0;
}
