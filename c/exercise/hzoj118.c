/*************************************************************************
	> File Name: hzoj118.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 06 Aug 2024 01:28:31 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int year, year_shengxiao;
    // 字符串指针
    const char *shengxiao;
    scanf("%d", &year);
    year_shengxiao = ((year - 1900) % 12 + 12) % 12;
    // 负数取余
    // printf("%d", year_shengxiao);
    switch(year_shengxiao){
        case 0: shengxiao = "rat";break;
        case 1: shengxiao = "ox";break;
        case 2: shengxiao = "tiger";break;
        case 3: shengxiao = "rabbit";break;
        case 4: shengxiao = "dragon";break;
        case 5: shengxiao = "snake";break;
        case 6: shengxiao = "horse";break;
        case 7: shengxiao = "sheep";break;
        case 8: shengxiao = "monkey";break;
        case 9: shengxiao = "rooster";break;
        case 10: shengxiao = "dog";break;
        case 11: shengxiao = "pig";break;
    }
    printf("%s\n", shengxiao);

    return 0;
}
