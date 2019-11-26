#include<iostream>

using namespace std;


#define INVALID  -999999999 // use any suitable value
const int CAPACITY  = 6; // Stack capacity
int top = -1;   // top pointer to stack
int stack[CAPACITY];    // stack



// Adding new item
void push(int item){
    
    if(top == CAPACITY - 1){
        printf("OVERFLOW\n");
        return;
    }
    
    top = top + 1;
    stack[top] = item;
}

// Deleting
void pop(){
    
    if (top == -1){
        printf("UNDERFLOW\n");
        return;
    }
    stack[top] = INVALID;
    top = top - 1;
    
}

// get top item
int peek(){
    if (top == -1){
        printf("UNDERFLOW\n");
        return INVALID;
    }
    return  stack[top];
}

// stack is empty
bool isEmpty(){
    return (top == -1);
}

// Number of items in stack
int size(){
    return  top+1;
}


void printStack(){
    for (int i=0; i<=top; i++) {
        printf("%d ",stack[i]);
    }
}


int main(){
    
    
    printf("\nPUSH - 5\n");
    push(5);
    printStack();
    printf("\nPUSH - 23\n");
    push(23);
    printStack();
    printf("\nPUSH - 35\n");
    push(35);
    printStack();
    printf("\nPUSH - 63\n");
    push(63);
    printStack();
    printf("\nPUSH - 97\n");
    push(97);
    printStack();
    printf("\nPUSH - 61\n");
    push(61);
    printStack();
    printf("\nPUSH - 80\n");
    push(80);
    printf("\nPOP\n");
    pop();
    printStack();
    printf("\nPOP\n");
    pop();
    printStack();
    printf("\nPOP\n");
    pop();
    printStack();
    printf("\nPOP\n");
    pop();
    printStack();
    printf("\nPOP\n");
    printStack();
    pop();
    printf("\nPOP\n");
    pop();
    printStack();
    printf("\nPOP\n");
    pop();
    
    return 0;
}
