/*************************************************************************
	> File Name: 20.enum.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 27 Aug 2024 05:47:43 PM CST
 ************************************************************************/

#include<stdio.h>

#define P(a, format){\
    printf("%s = " format "\n", #a, a);\
}

enum Number {
    zero,
    one,
    two = 10,
    three,
    four
};
//枚举类型实现数组自动扩容
enum FUNC_DATA{
#ifdef TEST1
    FUNC_test1,
#endif
#ifdef TEST2
    FUNC_test2,
#endif
#ifdef TEST3
    FUNC_test3,
#endif
    FUNC_MAX
};

#define DEFINE_FUNC(name)\
    void name(){\
        printf("this is function : %s\n", #name);\
    }\

DEFINE_FUNC(test1)
DEFINE_FUNC(test2)
DEFINE_FUNC(test3)

void (*func_arr[FUNC_MAX])() = {
#ifdef TEST1
    test1,
#endif
#ifdef TEST2
    test2,
#endif
#ifdef TEST3
    test3,
#endif
}; 
int main(){
    for(int i = 0; i < FUNC_MAX; i++){
        func_arr[i]();
    }
    enum Number a;
    a = zero;
    P(a, "%d");
    a = one;
    P(a, "%d");
    a = two;
    P(a, "%d");
    a = three;
    P(a, "%d");
    return 0;
}
