/*************************************************************************
	> File Name: 21.color.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 27 Aug 2024 06:13:17 PM CST
 ************************************************************************/

#include<stdio.h>

#ifdef PLAN_A 
#define COLOR(msg, code) "\033[1;" #code "m" msg "\033[0m"
#define RED(msg)     COLOR(msg, 31)
#define GREEN(msg)   COLOR(msg, 32)
#define YELLOW(msg)  COLOR(msg, 33)
#define BLUE(msg)    COLOR(msg, 34)
#endif

//#define PLAN_B
#ifdef PLAN_B
enum COLOR{
    RED = 31,
    GREEN,
    YELLOW,
    BLUE
};
#define COLOR_SET "\033[1;%dm"
#define COLOR_END "\033[0m"


#endif
int main(){ 
    printf("\033[1;32;43mhello world\n\033[0m");
#ifdef PLAN_A
    printf(RED("hello world\n"));
    printf(GREEN("hello world\n"));
    printf(YELLOW("hello world\n"));
    printf(BLUE("hello world\n"));
#endif
#ifdef PLAN_B
    printf(COLOR_SET "hello color plan b\n" COLOR_END, RED);
    printf(COLOR_SET "hello color plan b\n" COLOR_END, GREEN);
    printf(COLOR_SET "hello color plan b\n" COLOR_END, YELLOW);
    printf(COLOR_SET "hello color plan b\n" COLOR_END, BLUE); 
#endif

    return 0;
}
