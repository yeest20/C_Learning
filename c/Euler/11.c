/*************************************************************************
	> File Name: 11.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 12 Sep 2024 11:13:11 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 20

int grid[MAX_N + 5][MAX_N + 5];
int dir[4][2] = {
    {1, 0}, {0, 1}, {1, 1}, {1, -1}
};

int calc(int x, int y){
    int p = 0, ans = 0;
    for(int k = 0; k < 4; k++){
        p = 1;
        for(int step = 0; step < 4; step++ ){
            int x1 = x + step * dir[k][0];
            int y1 = y + step * dir[k][1];
            if(x1 < 0 || x1 >= MAX_N) break;
            if(y1 < 0 || y1 >= MAX_N) break;
            p *= grid[x1][y1];
        }
        if(p > ans) ans = p;
    }
    return ans;
}
int main(){
    for(int i = 0; i < MAX_N; i++){
        for(int j = 0; j < MAX_N; j++){
            scanf("%d", &grid[i][j]);
        } 
    }
    int ans = 0, tmp = 0;
    for(int i = 0; i < MAX_N; i++){
        for(int j = 0; j < MAX_N; j++){
            tmp = calc(i, j);
            if(tmp > ans) ans = tmp;
        }
    }
    printf("%d\n", ans);
    return 0;
}
