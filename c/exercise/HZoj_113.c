/*************************************************************************
	> File Name: HZoj_113.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 26 Jul 2024 11:35:43 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int y, m;
    scanf("%d%d", &y, &m);
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10:  case 12: printf("31\n");break;
        case 4: case 6: case 9: case 11: printf("30\n");break;
        case 2:
        // y % 100 != 0 在条件表达式中可以写为 y % 100;
        if(y % 4 == 0 && y % 100 != 0)  printf("29\n");
        else if(y % 400 == 0)  printf("29\n");
        else printf("28\n");break;
    }

    return 0;
}
