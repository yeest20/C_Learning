/*************************************************************************
	> File Name: 4.student_system.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 29 Aug 2024 02:01:38 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//读入学生数据
const char *file_name = "student_data.txt";
typedef struct Student{
    char name[20];
    int age;
    int class;
    double height;
} Student;

#define MAX_N 10000
Student stu_arr[MAX_N];
int stu_cnt;

// 文件操作函数
void clear_file(){
    FILE *fp = fopen(file_name, "w");
    fclose(fp);
}

int read_file2arr(Student* arr){
    int n = 0;
    FILE *fp = fopen(file_name, "r");
    if(fp == NULL) return 0;
    while(fscanf(fp, "%s", arr[n].name) != EOF){
        fscanf(fp, "%d%d%lf", 
            &arr[n].age, 
            &arr[n].class, 
            &arr[n].height);
        n += 1;
    } 

    fclose(fp);
    return n;
}

void add_arr2file(Student *arr, int n){
    FILE* fp = fopen(file_name,"a");
    for(int i = 0; i < n; i++){
    fprintf(fp, "%s %d %d %.2lf\n", 
            arr[i].name,
            arr[i].age,
            arr[i].class,
            arr[i].height);
    }
    fclose(fp);
    return;
}

enum operator{
    LIST = 1,
    ADD,
    MODIFY,
    DELETE,
    QUIT
};
//交互界面
int usage(){
    int no = 0;
    do{
    printf("%d: list students\n", LIST);
    printf("%d: add a new student\n", ADD);
    printf("%d: modify a student\n", MODIFY);
    printf("%d: delete a student\n", DELETE);
    printf("%d: quit\n", QUIT);
    printf("mysql> ");
    scanf("%d", &no);
    }while(no < LIST || no > QUIT);
    return no;
}


// list功能
void list_students(Student *stu_arr){
    int len = printf("%4s|%10s|%4s|%6s|%7s|\n", 
            "id",
            "name",
            "age",
            "class",
            "height");
    for(int i = 0; i < len; i++) printf("=");
    printf("\n");
    for(int i = 0;i < stu_cnt; i++){
        printf("%4d|%10s|%4d|%6d|%7.2lf|\n",
            i,
            stu_arr[i].name,
            stu_arr[i].age,
            stu_arr[i].class,
            stu_arr[i].height);
    }
    return;
}
// add功能
void add_a_student(Student *stu_arr){
    printf("add new item:(name, age, class, height)\n");
    printf("mysql> ");
    scanf("%s%d%d%lf", 
          stu_arr[stu_cnt].name, 
          &stu_arr[stu_cnt].age, 
          &stu_arr[stu_cnt].class, 
          &stu_arr[stu_cnt].height);
    add_arr2file(stu_arr + stu_cnt, 1);
    printf("SUCCESSFULLY...........\n");
    stu_cnt += 1;
    return ;
}
// modify功能
void modify_a_student(Student* stu_arr){
    int id;
    list_students(stu_arr);
    do{
    printf("modify id:");
    scanf("%d", &id);
    }while(id < 0 || id > stu_cnt - 1);
    printf("modify this item to:(name, age, class, height)\n");
    printf("mysql> ");
    scanf("%s%d%d%lf", 
          stu_arr[id].name, 
          &stu_arr[id].age, 
          &stu_arr[id].class, 
          &stu_arr[id].height);
    clear_file();
    add_arr2file(stu_arr, stu_cnt);
    printf("SUCCESSFULLY.........\n");
    stu_cnt += 1;
    return ;   
}
// delete
void delete_a_student(Student* arr){
    if(stu_cnt == 0){
        printf("there is no student.......\n");
        return;
    }
    int id;
    char confirm[100];
    list_students(stu_arr);
    do{
    printf("delete id:");
    scanf("%d", &id);
    }while(id < 0 || id > stu_cnt - 1);
    printf("confirm?(y / n):");
    getchar();
    scanf("%[^\n]", confirm);
    if(confirm[0] != 'y')  return;
    
    for(int i = id + 1; i < stu_cnt; i++){
        stu_arr[i - 1] = stu_arr[i];
    }
    stu_cnt -= 1;
    clear_file();
    add_arr2file(stu_arr, stu_cnt);
    printf("SUCCESSFULLY...........\n");
    return;
}
int main(){
    stu_cnt = read_file2arr(stu_arr);
    while(1){
        int no = usage();
        switch (no){
            case LIST:list_students(stu_arr);break;
            case ADD:add_a_student(stu_arr);break;
            case MODIFY:modify_a_student(stu_arr);break;
            case DELETE:delete_a_student(stu_arr);break;
            case QUIT:printf("quit\n");exit(1);
        }

    }
    return 0;
}