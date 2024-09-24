/*************************************************************************
	> File Name: 15.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 14 Sep 2024 07:23:02 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    long long n = 50, m = 10, ans = 1, cnt = 0;
    while(m > 1){
        cnt++;
        if(n > 10) ans *= (n--);
        if(m && ans % m == 0) ans /= (m--);
    }
    
    printf("%lld\n", cnt);
    return 0;
}
