/*************************************************************************
	> File Name: 09.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 09:33:10 PM CST
 ************************************************************************/

#include<stdio.h>

int is_value(int a, int b){
    return (a * a + b * b == (1000- a - b) * (1000 - a - b));

}

int main(){
    int ans = 1;
    for(int a = 1; a < 500; a++){
        for(int b = a + 1; b < 500; b++){
            if(is_value(a, b)){
                ans = a * b * (1000 - a - b); 
                printf("%d^2 + %d^2 = %d^2\n", a, b, 1000 - a - b);
                printf("%d\n", ans);
                return 0;
            } 
        }
    }
}
