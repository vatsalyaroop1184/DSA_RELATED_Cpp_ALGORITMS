#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    node* next;
};

struct node* createnode(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    new node->data = value;
    new node->next = NULL;
    return newnode;
};

struct node* addelement(struct node* header,int value){
    struct node* newnode = createnode(value);
    newnode->next = header;
    return newnode;
};

struct node* splitbymiddle(struct node* header){
    struct node* slow =  header;
    struct node* fast = header->next;
    while(fast == NULL || fast->next == NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    struct node* secondhalf = slow->next;
    slow->next = NULL;
    return secondhalf;

}

struct node* merge(struct node )