/*************************************************************************
	> File Name: 17.struct.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 27 Aug 2024 02:31:39 PM CST
 ************************************************************************/

#include<stdio.h>
//结构体

typedef struct person{
    char name[18];
    double age;
    char gender[4];
    int  height;
} person;

void output(struct person *p){
    printf("(%s, %lf, %s, %d)\n",
        p->name,
        p->age,
        p->gender,
        p->height
        );

} 
void set_buff(char *buff, void *head, void *begin, void *end, char ch){
    while(begin != end){
        buff[begin - head] = ch;
        begin += 1;
    }
    return;
}

void output_person(){
    int n = sizeof(person), len = 0;
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
    person Hu;
    set_buff(buff, Hu.name, &Hu.name, 20 + (void *)&Hu.name, 'n');
    set_buff(buff, Hu.name, &Hu.age, 4 + (void *)&Hu.age, 'a');
    set_buff(buff, Hu.name, &Hu.gender, 1 + (void *)&Hu.gender, 'g');
    set_buff(buff, Hu.name, &Hu.height, 4 + (void *)&Hu.height, 'h');
    for(int i = 0; i < n; i++){
        printf("%3c", buff[i]);
    }
    printf("\n");
}

int main(){
    person YEE = {"YEE", 22, 'M', 188};
    printf("%lu %lu\n", sizeof(YEE), sizeof(person));
    printf("(%s, %lf, %s, %d)\n", YEE.name, YEE.age, YEE.gender, YEE.height);
    output(&YEE);
    output_person();
    return 0;
}
