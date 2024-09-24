/*************************************************************************
	> File Name: 34.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 01 Sep 2024 09:47:34 PM CST
 ************************************************************************/

#include<stdio.h> 
int fac[10] = {1};
// 打表
__attribute__((constructor))
void init_fac(){
    for(int i = 1; i < 10; i++){
        fac[i] = fac[i - 1] * i;
    }
    return ;
} 

int is_val(int n){
    int x = n, y = 0;
    while(x){
        y = y + fac[x % 10];
        //printf("y = %d\n", y);
        x /= 10;
        //printf("x = %d\n", x);
    }

    return y == n;
}



int main(){
    //is_val(40585);
    //return 0;
    //for(int i = 0; i < 10; i++) printf("%d ", fac[i]);
    int arr[1000], n = 0;
    int sum = 0;
    for(int i = 10; i < fac[9] * 7; i++){
        if(!is_val(i)) continue;
        arr[n] = i;
        sum += i;
        n++;
    } 
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    printf("%d\n", sum);
    return 0;
}
