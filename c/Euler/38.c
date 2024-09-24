/*************************************************************************
	> File Name: 38.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 11:28:42 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define MAX_N 10000


int digits(int x){
    return (int)log10(x) + 1;
}

int calc(int x){
    int n = 1, ans = 0;
    while(digits(ans) < 9){
        ans *= (int)pow(10, digits(x * n));
        ans += x * n;
        n += 1;
    }
    if(digits(ans) - 9) return 0;
    int sign[10] = {0};
    sign[0] = 1;
    int temp = ans;
    while(temp){
        if(sign[temp % 10]) return 0;
        sign[temp % 10] += 1;
        temp /= 10;
    }
    return ans;
}


int main(){
    int ans = 0;
    for(int i = 1; i < MAX_N; i++){
        int temp = calc(i);
        if(temp > ans) ans = temp;
    }
    printf("%d\n", ans);

    return 0;
}
