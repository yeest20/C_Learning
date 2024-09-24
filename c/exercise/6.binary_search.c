/*************************************************************************
	> File Name: 6.binary_search.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 21 Aug 2024 11:14:56 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //随机数
    srand(time(0));  //随机种子：
    //printf("%d\n", rand());
    int arr[10] = {0};
    for(int i = 1; i < 10; i++){
        arr[i] = arr[i - 1] + (rand() % 10);
    } 
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int x;
    while(scanf("%d", &x) != EOF){
        int cnt1 = 0, cnt2 = 0,flag1 = 0, flag2 = 0;;
        for(int i = 0; i < 10; i++){
            cnt1 += 1;
            if(arr[i] != x) continue;
            flag1 = 1;
            break;
        }
        
        int l = 0, r = 9, mid;
        while(l <= r){
            cnt2 += 1;
            mid = (l + r) >> 1;
            if(arr[mid] == x) {flag2 = 1;break;}
            if(arr[mid] > x) r = mid - 1;
            else l = mid + 1;
        }

        printf("flag1 = %d, cnt1 = %d\n", flag1, cnt1);
        printf("flag2 = %d, cnt2 = %d\n", flag2, cnt2);
        }
    return 0;
}
