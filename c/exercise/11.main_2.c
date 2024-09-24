/*************************************************************************
	> File Name: 11.main_2.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 02:25:24 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
// 主函数参数:命令行参数
// 当程序名字是“YEE"时运行
int main(int argc, char *argv[], char **env){    
    /*
     * if(strcmp(argv[0],"./bilibili") != 0){
        printf("wrong call, please call: ./bilibilil\n");
        return 0;
    }
    */ 
    int flag = 0;
    for(char **p = env; p[0]; p += 1){
        if(strcmp(p[0], "LOGNAME=YEE") == 0){
            flag = 1;
            break;
        }    
    }
    if(!flag){printf("error log name, please use YEE\n");return 0;}

    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    for(char **p = env; p[0]; p += 1){
        printf("%s\n", p[0]);
    }
    return 0;
}
