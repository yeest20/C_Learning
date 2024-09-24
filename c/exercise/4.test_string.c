/*************************************************************************
	> File Name: 2.ex.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 06:13:32 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //字符串
    //c[100] 可以读入99个字符，最后一个为\0字符,表示结尾。
    char c[100] = "test char[x]";
        //格式占位符 %s
    printf("%s\n", c);
    // scanf 以 %s 读入字符串时以空白符为截断
    printf("%%s 占位符测试，请输入一段带有空白字符的字符串：");
        //不用占位符&
    scanf("%s", c);                          
    printf("scanf s:%s\n", c);
    getchar();                                                   
    // 集合占位符 %[],遇到之外的字符停止。
        // ^ 取反
    scanf("%[a-z]", c);
    printf("scanf s:%s\n", c);

    return 0;
}
