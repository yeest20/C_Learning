/*************************************************************************
	> File Name: printf.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 07:47:03 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

#define TEST(format, args...){\
    int n1, n2;\
    n1 = printf(format, ##args);\
    n2 = my_printf(format, ##args);\
    printf("n1 = %d n2 = %d\n", n1, n2);\
} 
char base_16_code(int x){
    if(x < 10) return x + '0';
    return x - 10 + 'a';
}
int my_printf(const char* format, ...){
    #define PUTC(c) putchar(c), cnt += 1
    // 处理变参列表
    va_list args;
    va_start(args, format);
    int cnt = 0;
    for(int i = 0; format[i]; i++){
        switch (format[i]){
            case '%':{
                switch(format[i + 1]){
                    case '%': PUTC('%'); i += 1; break;
                    case 's':{ 
                        const char *s = va_arg(args, const char*); 
                        for(int j = 0; s[j]; j++) PUTC(s[j]);
                        i += 1;
                    }
                    break;
                    case 'd':{
                        int num = va_arg(args, int);
                        int8_t arr[20], len = 0, flag = (num < 0);
                        do{
                            arr[len++] = num % 10;
                            num = num / 10;
                        }while(num);
                        if(flag) PUTC('-');
                        for(int j = len - 1; j >= 0; j--){
                            if(flag) PUTC(-arr[j] + '0');
                            else PUTC(arr[j] + '0');
                        }
                        i += 1;
                    }
                    break;
                    case 'x': case 'X':{
                        unsigned int num = va_arg(args, unsigned int);
                        int8_t arr[20], len = 0;
                        do{
                            arr[len++] = num % 16; 
                            num /= 16;
                        }while (num);
                        for(int j = len - 1; j >= 0; j--){
                            PUTC(base_16_code(arr[j]));
                        }
                        i += 1;
                    }break;
                } 
            }
            break;
            default:PUTC(format[i]);
        }  
    }
    
    #undef PUTC
    return cnt;

    
}

int main(){
    TEST("hello world\n");
    TEST("100%%\n"); 
    TEST("%s\n", "100%%");
    TEST("%d %d %d\n", INT32_MIN, INT32_MAX, 0);
    TEST("%x, %x, %X\n", 123, -1, INT32_MIN);
    return 0;
}
