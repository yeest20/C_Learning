/*************************************************************************
	> File Name: link_list.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 10:25:58 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
//初始化节点
Node *getNewNode(int val){
    Node *p = (Node *)malloc(sizeof(Node));
    p->data = val;
    p->next = NULL;
    return p;

}

//insert
Node* insert(Node *head, int pos, int val){
    if(pos == 0){
        Node *p = getNewNode(val);
        p->next = head;
        return p;
    }

    Node *p = head;
    for(int i = 1; i < pos; i++) p = p->next;
    Node *node = getNewNode(val);
    node->next = p->next;
    p->next = node;
    return head;
}

//销毁节点
void clear(Node *head){
    if(head == NULL) return;
    for(Node *p = head, *q; p; p = q){
        q = p->next;
        free(p);
    }
    return;
}

//output_linklist
void output_linklist(Node *head){
    int n = 0;
    for(Node *p = head; p; p = p->next) n+=1;
    for(int i = 0; i < n; i++){
        printf("%3d", i);
        printf("  ");
    }
    printf("\n");
    for(Node* p = head; p; p = p->next){
        printf("%3d", p->data);
        printf("->");
    }
    printf("\n\n\n");
    return;
}

int main(){
   srand(time(0));
    Node *head = NULL;
    #define MAX_OP 7
    for(int i = 0; i < MAX_OP; i++){
        int pos = rand() % (i + 1),   val = rand() % 100;
        printf("insert %d at %d to linklist\n", val, pos);
        head = insert(head, pos, val);
        output_linklist(head);

    }
    clear(head);

    return 0;
}
