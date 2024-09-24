/*************************************************************************
	> File Name: 09-2.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 10:05:00 PM CST
 ************************************************************************/

#include<stdio.h>
int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int main(){
    int ans = 0;
    for(int n = 1; n < 21; n++){
        for(int m = n + 1; m < 25; m++){
            if(gcd(m, n) != 1) continue;
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if(1000 % (a + b + c) == 0){
                int k = 1000 / (a + b + c);
                ans = a * b * c * k * k * k;
                printf("%d, %d, %d, %d\n", a, b, c, ans);

            }
            if(ans) break;
        }
        if (ans) break;
    }

    return 0;
}
