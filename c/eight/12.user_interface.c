/*************************************************************************
	> File Name: 12.user_interface.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 30 Aug 2024 02:30:33 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


enum STATUS{
    FIRST = 0,
    ONE,
    TWO,
    THREE,
    LAST
};

int page0_usage(){
    printf("1:goto page1\n");
    printf("2:goto page2\n");
    printf("3:goto page3\n");

    int x = -1;
    do{
        printf("input: ");
        scanf("%d", &x);
    }while(x < 1 || x > 3);
    return x;
}

int page1_usage(){
    printf("0:goto page0\n");
    printf("1:goto last page\n");

    int x = -1;
    do{
        printf("input: ");
        scanf("%d", &x);
    }while(x < 0 || x > 1);
    return x;
}

void page2_run(){
    #define MAX_N 10
    int arr[MAX_N];
    int len = 0;
    for(int i = 0; i < MAX_N; i++) arr[i] = rand() % 100;
    for(int i = 0; i < MAX_N; i++) len += printf("%3d ", arr[i]);
    printf("\n");
    for(int i = 0; i < len; i++) printf("-");
    printf("\n");
    for(int i = 0; i < MAX_N; i++) printf("%3d ", i);
    printf("\n");
    return ;
}
int page3_usage(){
    printf("0:goto page0\n");
    printf("1:goto last page\n");

    int x = -1;
    do{
        printf("input: ");
        scanf("%d", &x);
    }while(x < 0 || x > 1);
    return x;
}
void page4_usage(){
    printf("Has excuted........\n");
    return;
}

int main(){
    srand(time(0));
    int status = FIRST;    
    while(1){
        switch(status){
            case FIRST:{
                printf("in first page.....\n");                
                int ope = page0_usage();
                if(ope == 1) status = ONE;
                if(ope == 2) status = TWO;
                if(ope == 3) status = THREE;
            } break;    
            case ONE:{
                printf("in page1......\n");
                int ope = page1_usage();
                if(ope == 0) status = FIRST;
                if(ope == 1) status = LAST;
            }break;
            case TWO:{
                printf("in page2......\n");
                page2_run();
                status = LAST;
            }break;
            case THREE:{
                printf("in page3......\n");
                int ope = page3_usage();
                if(ope == 0) status = FIRST;
                if(ope == 1) status = LAST;
            }break;
            case LAST:{
                printf("in last page......\n");
                page4_usage();
                status = FIRST;
            }break;
        }


    }


    return 0;
}
