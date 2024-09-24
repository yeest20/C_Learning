/*************************************************************************
	> File Name: file_operate.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 29 Aug 2024 04:05:14 PM CST
 ************************************************************************/

void clear_file(char* filename){
    FILE *fp = fopen(filename, "w");
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

