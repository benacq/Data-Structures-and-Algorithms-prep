#include <iostream>

using namespace std;
#define MAX_SIZE 101


/* STACK DATATYPE
 * A stack is a list with the restriction that insertion and deletion can be performed only from
 * one end called the top. Stacks have a LIFO structure, ie Last in First Out

 * Two main operations can be performed on a stack
 ! push()
 This operation adds an element at the top of a stack

 ! pop()
 This operation removes the element at the top of the stack

 apart from these two, there are these operations that can also be performed on a stack.
 ! top()
 This returns the top element of the stack

 ! isEmpty()
 This checks if a stack is empty. Returns a boolean

 ALL THESE OPERATIONS CAN BE PERFORMED IN CONSTANT TIME
 *
 *
 * */


/*ARRAY IMPLEMENTATION OF STACK
! PROS
 * very easy to implement
 * very fast
 * Best and average case runtime is constant time O(1) because operations are performed at the end of the array

! CONS
 * Array can be full
 * Worst case runtime for push operation is O(n) in case there is the need to expand the array
 * May consume more memory at certain instances
 */


class Stack {

private:
    int A[MAX_SIZE]{};  // array to store the stack
    int top;   // variable to mark the top index of stack.

public:
    // constructor
    Stack() {
        top = -1; // for empty array, set top = -1
    }

    void push(int x) {
        /* CHECK IF ARRAY IS FULL
         * If array is full and a push operation is performed, it will cause an overflow.
         * To fix this, we'd have to use a dynamic array so that we can expand the array when we notice it is full.
         * In this implementation we are using a fixed size array so it cannot be expanded, hence we print an error.
        */
        if (top == MAX_SIZE - 1) {
            std::cout << "Overflow" << std::endl;
            return;
        }

        //  A[++top] = x; // This is a one-liner
        top += 1;
        A[top] = x;


    }

    void pop() {
        /* CHECK IF STACK IS ALREADY EMPTY
         * If stack is already empty, we cannot pop(there is nothing to pop) so we print stack is empty
        */
        if (top < 0) {
            std::cout << "Stack is empty" << std::endl;
            return;
        };
        top -= 1;
    }

    bool isEmpty() const {
        if (top == -1) return true;
        return false;
    }

    void print() {
        int i;
        printf("Stack: ");
        for (i = 0; i <= top; i++)
            printf("%d ", A[i]);
        printf("\n");
    }


};


/* LINKEDLIST IMPLEMENTATION OF STACK
 ? USING LINKED LIST FOR STACK IMPLEMENTATION MEANS WE HAVE TWO DIRECTIONS TO GO, EITHER WE OPERATE FROM THE
 ? BEGINNING OR WE OPERATE FROM THE END.
    ! PROS
     * No need to worry about overflows
     * Memory efficient
     * The cost of insertion and deletion at the beginning is O(1)
     * best case runtime is O(1) if push and pop operations are performed at the beginning

    ! CONS
     * Very slow because for each operation, we have to traverse the list
     * Worst case runtime for major operations are O(n)
 */

//! TOD0


struct Node {
    int data;
    struct Node *link;
};


class StackLinkedList {
private:
    struct Node *top;   // pointer to the top of the stack.

public:
    // constructor
    StackLinkedList() {
        top = nullptr;
    }

    //implement methods

    void push(int data) {
        /* INSERT AT BEGINNING OF LINKED LIST
         * Create a new Node
         * Set Node's data section to the incoming data and link section to the existing top(the first node)
         * Set head to point to the new inserted Node.
        */
        Node *newNode = new Node();
        newNode->data = data;
        newNode->link = top;
        top = newNode;
    }

    void pop() {
        /* DELETE NODE AT BEGINNING(TOP) OF LINKED LIST
           * Check if top is nullptr, if yes, stack is empty else...
           * Create temporary node variable to store the top
           * Reset top to the next Node in its pointer
           * Delete the temporary node we created.
          */
        if (top == nullptr) return;
        Node *tempTop = top;
        top = top->link;
        free(tempTop);
    }

    void isEmpty() {
        if (top == nullptr) {
            cout << "true";
        } else {
            cout << "false";
        }
    }

    void print() {
        struct Node *temp = top;
        std::cout << "Stack is: ";
        while (temp != nullptr) {
            printf(" %d", temp->data);
            temp = temp->link;
        }
        std::cout << "\n";
    }

};

int main() {
    //LINKED LIST IMPLEMENTATION TESTS
    StackLinkedList stackLinkedList;
    stackLinkedList.push(3);
    stackLinkedList.push(7);
    stackLinkedList.push(253);
    stackLinkedList.push(23);
    stackLinkedList.push(52);
    stackLinkedList.print();
    stackLinkedList.pop();
    stackLinkedList.print();
    stackLinkedList.isEmpty();

    //ARRAY IMPLEMENTATION TESTS
//    Stack stack;
//    stack.push(4);
//    stack.print();
//    stack.push(2);
//    stack.print();
//    stack.push(5);
//    stack.print();
//    stack.push(34);
//    stack.print();
//    stack.push(23);
//    stack.print();
//    stack.push(65);
//    stack.print();


//    stack.pop();
//    stack.print();
    return 0;
}
