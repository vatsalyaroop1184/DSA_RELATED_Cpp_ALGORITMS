#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};

struct node* create_node(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

struct node* insert_at_end(int value,struct node* main_header){
    struct node* newnode = create_node(value);
      struct node* header = main_header;
   if(header == NULL){
    return newnode;
   }
      
    while(header->next != NULL){
       header = header->next;
    }
    header->next = newnode;
    newnode->prev = header;

    return main_header;
}

struct node* insert_at_front(int value,struct node* header){
    struct node* newnode = create_node(value);
    if(header == NULL){
        return newnode;
    }
    newnode->next = header;
    header->prev = newnode;
    return newnode;
}

void print_list(struct node* header){
    struct node* temp = header;
    while(temp->next != NULL){
        printf("%d->",temp->data);
        
        temp = temp->next;
    }
    if(temp->next == NULL){
            printf("%d",temp->data);
        }
}

void free_list(struct node* header){
    struct node* temp = header;
    while(header != NULL){
        temp = header;
        header = header->next;
        free(temp);
    }
}
int main(){
    struct node* n1 = NULL;
    struct node* n2 = NULL;
    int t;
    while(1){
        scanf("%d ",&t);
        if(t == -1){
            break;
        }
        n1 = insert_at_end(t,n1);
        n2 = insert_at_front(t,n2);
        
    }
    print_list(n1);
    printf("\n");
    print_list(n2);
    free_list(n1);
    free_list(n2);
    return 0;
}