/*************************************************************************
	> File Name: 45.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 05:33:02 PM CST
 ************************************************************************/

#include<stdio.h>

long long pn(long long  n){
    return n * (3 * n - 1) / 2;
}
long long hn(long long n){
    return n * (2 * n - 1);
}

int is_val(long long val, long long (*func)(long long)){
    long long head = 0, tail = val, mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(func(mid) == val) return 1;
        if(func(mid) < val) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main(){
    long long ans = 0, n = 150;
    while(!ans){
        n++;
        if(is_val(hn(n), pn)) ans = hn(n);
    } 
    printf("%lld\n", ans);

}
