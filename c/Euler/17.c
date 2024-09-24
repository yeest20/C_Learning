/*************************************************************************
	> File Name: 17.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 01:00:52 AM CST
 ************************************************************************/

#include<stdio.h>

static int arr1[20] = {
0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8
};

static int arr2[10] ={
    0, 0, 6, 6, 5, 5, 5, 7, 6, 6
};

int get_letters(int x){
    if(x == 1000) return 11;
    if(x < 20) return arr1[x];
    if(x < 100) return arr2[x / 10] + arr1[x % 10];
    if(x % 100 == 0) return arr1[x / 100] + 7;
    return arr1[x / 100] + 10 + get_letters(x % 100);

}

int main(){
    int sum = 0;
    for(int i = 1; i <= 1000; i++){
        sum += get_letters(i);
    }
    printf("%d\n", sum);
    return 0;
}
