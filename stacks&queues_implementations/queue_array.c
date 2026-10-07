#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct{
    int arr[MAX_SIZE];
    int front;
    int rear ;
    int size ;
}queue;

void initialize(queue *q){
      q->front = 0;
      q->rear = -1;
      q->size = 0;
}

bool is_empty(queue *q){
    return q->size == 0;
}


bool is_full(queue *q){
    return q->size == MAX_SIZE;
}

void enqueue(queue *q,int value){
    if(is_full(q)){
        printf("cant add any element as it is full ");
        return;
    }
    else{
        q->rear = (q->rear + 1)% MAX_SIZE;
        q->arr[q->rear] = value;
        q->size++;
    }
}

int dequeue(queue *q){
    if(is_empty(q)){
      printf("there is nothing here to remove");
      return -1;
    }
    else{
        q->front = (q->front +1)% MAX_SIZE;
        int t = q->arr[q->front];
        q->size--;
        return t;
    }
}

void display(queue *q){
    if(is_empty(q)){
        printf("queue is empty to print");
    }
    else{
        for(int i = 0;i < q->size;i++){
            printf("%d ",q->arr[(q->front + i)%MAX_SIZE]);
        }
    }
    printf("\n");
}

int main(){
    queue q;
    initialize(&q);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    display(&q);
    dequeue(&q);
    dequeue(&q);
    display(&q);
    return 0;
}