/*************************************************************************
	> File Name: 26.funny_linklist.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 11:40:07 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define offset(T, d)  (size_t)(&(((T *)(0))->d))
#define start(addr, T, d) ((T *)(((void *)addr) - offset(T, d)))

enum DataType{
    A_type,
    B_type,
    C_type,
    D_type,
    MAX_type
};

// Link字段
typedef struct Link{
    enum DataType type;
    struct Link *next;
} Link;
// A类型
struct A{
    int x, y;
    Link l;
};
    // 数据格式
Link *getDataA(){
    struct A *a = (struct A *) malloc(sizeof(struct A));
    a->x = 3, a->y = 4;
    a->l.next = NULL;
    a->l.type = A_type;
    return &(a->l);
}

    // 输出格式
void output_A(Link *p){
    struct A *a = start(p, struct A, l);
    printf("struct A: x = %d, y = %d\n", a->x, a->y);
    return ;
}

// B类型
struct B{
    int a;
    Link l;
    double b;
};

Link *getDataB(){
    struct B *b = (struct B *) malloc(sizeof(struct B));
    b->a = 3, b->b = 4;
    b->l.next = NULL;
    b->l.type = B_type;
    return &(b->l);
}

void output_B(Link *p){
    struct B *b = start(p, struct B, l);
    printf("struct B: a = %d, b = %lf\n", b->a, b->b);
    return ;
}


//C类型
struct C{
    char c;
    Link l;
    const char *s;
    int t;
};

Link *getDataC(){
    struct C *c = (struct C *) malloc(sizeof(struct C));
    c->c = 'x', c->s = "struct C", c->t = 99;
    c->l.next = NULL;
    c->l.type = C_type;
    return &(c->l);
}

void output_C(Link *p){
    struct C *c = start(p, struct C, l);
    printf("struct C: c = %c, s = %s, t = %d\n", c->c, c->s, c->t);
    return ;
}

//D类型
struct D{
    long long a;
    Link l;
};

Link *getDataD(){
    struct D *d = (struct D*) malloc(sizeof(struct D));
    d->a = 125;
    d->l.next = NULL;
    d->l.type = D_type;
    return &(d->l);
}

void output_D(Link *p){
    struct D *d = start(p, struct D, l);
    printf("struct D: a = %lld\n", d->a);
    return ;
}



Link* (*getData[MAX_type])() = {
    getDataA,getDataB,getDataC,getDataD
};

void (*output[MAX_type])(Link *) = {
    output_A, output_B, output_C,output_D
};

int main(){
   #define MAX_OP 10
    Link head, *p = &head;
    for(int i = 0; i < MAX_OP; i++){
        p->next = getData[rand() % MAX_type]();
        p = p->next;
    }
    for (p = head.next; p; p = p->next){
        output[p->type](p);
    }
    return 0;
}
