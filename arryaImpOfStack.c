#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
    unsigned capacity;
    int top;
    int *array;
} STACK;


STACK* createStack(unsigned capacity) {
    STACK* stc = (STACK*)malloc(sizeof(STACK));
    stc->capacity = capacity;
    stc->top = -1;
    stc->array = (int*)malloc(sizeof(int) * stc->capacity);
    return stc;
}


int isFull(STACK* stack) {
    return stack->top == stack->capacity - 1;
}

int isEmpty(STACK* stack) {
    return stack->top == -1;
}

void push(STACK* stack, int i) {
    if(isFull(stack)) {
        printf("\nOverflow");
    } else {
        stack->top++;
        stack->array[stack->top] = i;
        printf("\nAdded Successfully");
    }
}

int pop(STACK* stack) {
    if(isEmpty(stack)) {
        printf("\nUnderflow");
        return -6500;
    }
    int popValue = stack->array[stack->top];
    stack->top--;
    return popValue;
}

int peek(STACK* stack) {
    if(isEmpty(stack)) {
        printf("\n No data as the stack is empty");
        return -6500;
    }
    return stack->array[stack->top];
}

int main() {
    STACK* stack1 = createStack(5);

    push(stack1, 1);
    push(stack1, 2);
    push(stack1, 3);
    push(stack1, 4);
    push(stack1, 5);

    int popValue = pop(stack1);
    printf("\n%d is poped", popValue);
    printf("\nPeek value is: %d", peek(stack1));

    pop(stack1);
    pop(stack1);
    pop(stack1);
    pop(stack1);

    return 0;
}