/*************************************************************************
	> File Name: hzoj145.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 21 Aug 2024 10:48:51 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char name[105] = "", dname[105] = "";
    int n_len, d_len = -1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", name);
        n_len = strlen(name);
        if(n_len > d_len){
            strcpy(dname,name);
            d_len = n_len;
        }
    }
    printf("%s\n", dname);
    return 0;
}
