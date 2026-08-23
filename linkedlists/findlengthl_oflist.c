#include<stdio.h>
struct node{
    int value;
    node* next;
};

struct node* createnode(int value){
    node* node1 = (struct node*)malloc(sizeof(struct node));
    node1->value = value;
    node1->next = NULL;
    return node1;
}

struct node* insert(int value,struct node* header){
    node* node1 = createnode(value);
    node1->next = header;
    return node1;
}

int sizeoflist(struct node* header){
        
}