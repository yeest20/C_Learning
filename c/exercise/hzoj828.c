/*************************************************************************
	> File Name: hzoj828.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 22 Aug 2024 03:32:48 PM CST
 ************************************************************************/

#include <stdio.h>

void rotate_array(int *nums, int n, int p) {
    for(int t1 = 0, t2 = p - 1; t1 < t2; t1++, t2--){
        nums[t1] ^= nums[t2];
        nums[t2] ^= nums[t1];
        nums[t1] ^= nums[t2];
    }
    for(int t1 = p, t2 = n - 1; t1 < t2; t1++, t2--){
        nums[t1] ^= nums[t2];
        nums[t2] ^= nums[t1];
        nums[t1] ^= nums[t2];
    }
    for(int t1 = 0, t2 = n - 1; t1 < t2; t1++, t2--){
        nums[t1] ^= nums[t2];
        nums[t2] ^= nums[t1];
        nums[t1] ^= nums[t2];
    }

    return ;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    rotate_array(arr, n, k);
    for (int i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
