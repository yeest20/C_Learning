/*************************************************************************
	> File Name: 18.struct_size.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 27 Aug 2024 04:11:14 PM CST
 ************************************************************************/

#include<stdio.h>
void set_buff(char *buff, void *head, void *begin, void *end, char ch){
    while(begin != end){
        buff[begin - head] = ch;
        begin += 1;
    }
    return;
}

#ifdef STRUCT_A
typedef struct A{
    char a;
    int b;
    short c;
} A;


void output_struct(){
    int n = sizeof(A), len = 0;
    char buff[n];
    for(int i = 0; i < n; i++){
        buff[i] = '.';
    }
    for(int i = 0; i < n; i++){
        len += printf("%3d", i);
    }
    printf("\n");
    for(int i = 0; i < len; i++) printf("-");
    printf("\n");
    A Hu;
    set_buff(buff, &Hu.a, &Hu.a, 1 + (void *)&Hu.a, 'a');
    set_buff(buff, &Hu.a, &Hu.b, 4 + (void *)&Hu.b, 'b');
    set_buff(buff, &Hu.a, &Hu.c, 2 + (void *)&Hu.c, 'c');
    for(int i = 0; i < n; i++){
        printf("%3c", buff[i]);
    }
    printf("\n");
}


#endif

#ifdef STRUCT_B
#pragma pack(1)
typedef struct B{
    char a;
    short b;
    int c;
} B;


void output_struct(){
    int n = sizeof(B), len = 0;
    char buff[n];
    for(int i = 0; i < n; i++){
        buff[i] = '.';
    }
    for(int i = 0; i < n; i++){
        len += printf("%3d", i);
    }
    printf("\n");
    for(int i = 0; i < len; i++) printf("-");
    printf("\n");
    B Hu;
    set_buff(buff, &Hu.a, &Hu.a, 1 + (void *)&Hu.a, 'a');
    set_buff(buff, &Hu.a, &Hu.b, 2 + (void *)&Hu.b, 'b');
    set_buff(buff, &Hu.a, &Hu.c, 4 + (void *)&Hu.c, 'c');
    for(int i = 0; i < n; i++){
        printf("%3c", buff[i]);
    }
    printf("\n");
}


#endif

int main(){
    output_struct();

    return 0;
}
