/*************************************************************************
	> File Name: hzoj235.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 04:35:11 PM CST
 ************************************************************************/

#include<stdio.h>


int arr[10];

void printf_one_result(int n){
    for(int i = 0; i<= n; i++){
        if(i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return;
}

void f(int i, int j, int n){
    if(j > n) return;
    for(int k = j; k <= n; k++){
        arr[i] = k;
        printf_one_result(i);
        f(i + 1, k + 1, n);
    }
    return;

}

int main(){
    int n;
    scanf("%d", &n);
    f(0, 1, n);
    return 0;
}
