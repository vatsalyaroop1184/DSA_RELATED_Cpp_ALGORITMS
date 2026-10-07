#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100
typedef struct {
    int arr[MAX_SIZE];
    int top;
}stack;
void initialize(stack *s){
    s->top = -1;
}
bool  is_empty(stack *s){
    return s->top == -1;
}
bool is_full(stack *s){
    return s->top == MAX_SIZE - 1;
}
void push(stack *s,int value){
    if(is_full(s)){
        printf("the stack will be overflow if %d added",value);
        return;
    }
    else{
        s->arr[++s->top] = value;
    }
}

int  pop(stack *s){
    if(is_empty(s)){
        printf("There is nothing to pop out");
        return -1;
    }
    else{
        return s->arr[s->top--];
    }
}
int  peek(stack *s){
    if(is_empty(s)){
        printf("nothing there here top to show");
        return -1;
    }
    else{
        return s->arr[s->top];
    }
}

void display(stack *s){
    if(is_empty(s)){
        printf("nothing there to display");
    }
    else{
      for (int i = s->top; i >= 0; i--) {
    printf("%d ", s->arr[i]);
}
        }
    }


int size_stack(stack *s){
    return s->top + 1;
}

int main(){
    stack s;
    initialize(&s);
    pop(&s);
    return 0;
    }