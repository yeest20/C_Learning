/*************************************************************************
	> File Name: 44.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 03:24:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

long long pentagonal(long long n){
    return n * (3 * n - 1) / 2;
}

int is_val(long long (*func)(long long), long long val){
   long long head = 1, tail = val / 3, mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(func(mid) == val) return 1;
        if(func(mid) < val) head = mid + 1;
        else tail = mid - 1;
    }

    return 0;
}

int main(){
    long long  j = 1, ans = INT32_MAX;
    while(pentagonal(j + 1) - pentagonal(j) < ans){
        j++;
        for(int i = j - 1; i >= 1 && pentagonal(j) - pentagonal(i) < ans; i-- ){
            long long b = pentagonal(j), a = pentagonal(i);
            if(!is_val(pentagonal, b + a)) continue; 
            if(!is_val(pentagonal, b - a)) continue; 
            printf("%lld -> %lld\n", b, a);
            ans = b - a;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
