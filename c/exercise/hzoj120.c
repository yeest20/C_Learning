/*************************************************************************
	> File Name: hzoj120.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 06 Aug 2024 01:45:40 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    // 判断日期是否存在
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if(d <= 0 || y <= 0 || m <= 0 || m > 12 || d > 31)
        printf("NO\n");
    else{
        switch(m){
            case 4:
            case 6:
            case 9: 
            case 11:
                if(d == 31) printf("NO\n");
                else printf("YES\n");
                break;
            case 2:
                if((y % 100 != 0 && y % 4 != 0) && d == 29) printf("NO\n");
                else if ((y % 100 == 0 && y % 400 != 0) && d == 29) printf("NO\n");
                else printf("YES\n");
                break;
            default: printf("YES\n");break;
        }
    }
    return 0;
}
