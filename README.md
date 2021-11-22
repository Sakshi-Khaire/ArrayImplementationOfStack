# Array implementation of stack in C

> Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

Mainly the following three basic operations are performed in the stack:

- `Push`: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
- `Pop`: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
- `Peek or Top`: Returns the top element of the stack.
- `isEmpty`: Returns true if the stack is empty, else false.

Following is the graphical representation of the Stack

![stack](https://media.geeksforgeeks.org/wp-content/uploads/20210716162942/stack-660x345.png)

This first step is to create a structure with field `top` which will keep the track on the number of elements in the stack. Second field is the `capacity` which denotes the capacity of the stack. And the third field is the `array` in which the element of the stack will be resides.

```C
    struct Stack {
        int top;
        unsigned capacity;
        int* array;
    };
```

## The following function helps in initializing the default values to the stack

```C
    struct Stack* createStack(unsigned capacity)
    {
        //Using malloc for allocating memory of size struct Stack(i.e. size of the structure).

        struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));

        //Setting the capacity of the stack

        stack->capacity = capacity;

        //Setting the top to -1 

        stack->top = -1;

        //Initializing the array where we will store the data of type integer

        stack->array = (int*)malloc(stack->capacity * sizeof(int));

        //Returning the stack

        return stack;
    }
```

## Following are the function which are performing the basic functionality of the stack

*Please also look into the code for the clear understanding(All the important comments are being taken care of)*

```C
    // Stack is full when top is equal to the last index

    int isFull(struct Stack* stack)

    // Stack is empty when top is equal to -1

    int isEmpty(struct Stack* stack)

    // Function to add an item to stack.  It increases top by 1

    void push(struct Stack* stack, int item)

    // Function to remove an item from stack.  It decreases top by 1

    int pop(struct Stack* stack)

    // Function to return the top from stack without removing it

    int peek(struct Stack* stack)
```

# How to run the code

* Download the source code
* Open the terminal (in mac) for cmd (in windows) and navigate to the folder in with the source code is present
* Type the command ```gcc linkedList.c``` . This command will compile the code.
* To run the code type the command ```./a.out``` in the same terminal. This command will give you the output.

