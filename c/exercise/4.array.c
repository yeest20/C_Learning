/*************************************************************************
	> File Name: 4.array.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 21 Aug 2024 09:55:48 AM CST
 ************************************************************************/
 #include<stdio.h>
 void test1(){
    // 数组
    int a[10];
    for(int i = 0; i < 10; i++){
        a[i] = 2 * i;
    }

    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return;
 }

void test2(){
    int n;
    printf("input n:");
    scanf("%d", &n);
    int a[2 * n];
    for(int i = 0; i < 2 * n; i++){
        a[i] = 3 * i;
    }

    for(int i = 0; i < 2 * n; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}

void test3(){
    //初始化
    //int a[5] = {0};
    int a[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return;
}

void test4(){
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    printf("sizeof(a)/sizeof(int) = %lu\n", sizeof(a) / sizeof(int));
    printf("&a = %p\n&a[0] = %p\n", &a, &a[0]);
    for(int i = 0; i < 7; i++){
        printf("&a[%d] = %p\n", i, &a[i]);
    }
}

int main(){
    //test1();    
    //test2();
    test3();
    test4();
    return 0;
}
