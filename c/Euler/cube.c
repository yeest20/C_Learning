/*************************************************************************
	> File Name: cube.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 05:22:42 PM CST
 ************************************************************************/

#include<stdio.h>

int cube(int n){
    return n * n * n; 
}

int is_cubic(int n){
    int head = 1, tail = n, mid;
    while(head <= tail){
        mid = (head + tail) / 2;
        if(cube(mid) == n) return 1;
        if(cube(mid) < n) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main(){
    int n = 28;
    int b = is_cubic(n);
    printf("%d\n", b);

}
