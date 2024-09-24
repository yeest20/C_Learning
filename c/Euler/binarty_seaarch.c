/*************************************************************************
	> File Name: binarty_seaarch.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 04:28:09 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N  500

int binarty_search(int *arr, int n, int val){
    int head = 0, tail = n - 1, mid; 
    while(head <= tail){
        mid = (head + tail) / 2;
        if(arr[mid] == val) return mid;
        if(arr[mid] < val) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;



}

int main(){
    int arr[MAX_N + 5] = {0}, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    while(scanf("%d", &k) != EOF){
        int index = binarty_search(arr, n, k);
        printf("search %d from array: %d\n", k, index);
    }

    return 0;
}
