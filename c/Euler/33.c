/*************************************************************************
	> File Name: 33.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 10:58:05 AM CST
 ************************************************************************/

#include<stdio.h>

int xkeep[10], ykeep[10];

int gcd(int a, int b){
    return(b ? gcd(b, a % b) : a);
}

int is_val(int x, int y){
    int x1 = x / 10, x2 = x % 10;
    int y1 = y / 10, y2 = y % 10;
    if(x2 == 0 || y2 == 0) return 0;
    if(x1 == y1 && (x2 * y == y2 * x)) return 1; 
    if(x1 == y2 && (x2 * y == y1 * x)) return 1; 
    if(x2 == y1 && (x1 * y == y2 * x)) return 1; 
    if(x2 == y2 && (x1 * y == y1 * x)) return 1; 
    return 0;
}

int main(){
    int x = 1, y = 1, c = 1;
    for(int a = 11; a < 99; a++){
        for(int b = a + 1; b < 100; b++){
            if(!is_val(a, b)) continue;
            //int x = 1, y = 1;
            x *= a;
            y *= b;
            xkeep[++xkeep[0]] = x;
            ykeep[++ykeep[0]] = y;
            c = gcd(x, y);
            x /= c;
            y /= c;
        }
    }
    for(int i = 1; i <= xkeep[0]; i++){
        printf("%d/%d\n", xkeep[i], ykeep[i]);
    }
    printf("%d\n", y);
    return 0;
}
