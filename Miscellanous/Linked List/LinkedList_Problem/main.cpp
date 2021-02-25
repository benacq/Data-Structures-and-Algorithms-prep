#include <iostream>
#include <vector>

using namespace std;

/*
 !PROBLEM STATEMENT
 Assuming that each node has 2 fields, write an algorithm to create a
 LinkedList with 2 nodes whose data fields are said to be the values MAT
 and PAT respectively if T points to the first node in the List.

 */

struct Node {
    int data;
    int data2;
    Node *prev;
};
struct Node *head;

class LinkedList {


/*! STEPS TO APPENDING A NODE TO A LINKEDLIST
 * CREATE A NEW NODE TO STORE THE NEW DATA
 * ASSIGN THE RESPECTIVE DATA AND POINTER SECTIONS OF THE NODE
 * CHECK IF THE LIST IS EMPTY
 * IF YES: SET THE HEAD TO THE NEW NODE and TERMINATE
 * IF NO: CREATE A TEMPORARY NODE AND ASSIGN HEAD TO IT
 * USING A WHILE LOOP, ITERATE THE LIST USING THE HEAD AS A STARTING POINT
 * LOOP TERMINATION CONDITION: IF THE CURRENT NODE'S NEXT POINTER IS NULL
 * AT EACH ITERATION SET THE TEMPORARY NODE TO THE CURRENT NODE UNTIL IT IS NULL
 * SET THE NEXT POINTER OF THE LAST NODE TO THE NEWLY CREATED NODE
 * */
public:
    static void createNode(int x, int y) {
        // * CREATE A NEW NODE TO STORE THE NEW DATA
        Node *newNode = new Node();
        // * ASSIGN THE RESPECTIVE DATA AND POINTER SECTIONS OF THE NODE
        newNode->data = x;
        newNode->data2 = y;
        newNode->prev = nullptr;

        // * CHECK IF THE LIST IS EMPTY(list is empty if head is null pointer)
        if (head == nullptr) {
            // * IF YES: SET THE HEAD TO THE NEW NODE
            head = newNode;
            // * TERMINATE
            return;
        }

        // * IF NO: CREATE A TEMPORARY NODE AND ASSIGN HEAD TO IT
        // MAKE THE LAST ELEMENT THE NEW HEAD
        Node *temp = head;

        // * USING A WHILE LOOP, ITERATE THE LIST USING THE HEAD(TEMP) AS A STARTING POINT
        while (temp->prev != nullptr) { // !LOOP TERMINATION CONDITION: IF THE CURRENT NODE'S NEXT POINTER IS NULL
            // * AT EACH ITERATION SET THE TEMPORARY NODE TO ITS NEXT POINTER UNTIL IT IS NULL
            temp = temp->prev;
        }

        // * WHEN IT REACHES HERE, IT MEANS THE LAST NODE HAS BEEN FOUND
        // * SET THE NEXT POINTER OF THE LAST NODE TO THE NEWLY CREATED NODE
        temp->prev = newNode;
    }


    /*! STEPS TO APPENDING A NODE TO A LINKEDLIST
   * CREATE A NEW NODE TO STORE THE NEW DATA
   * ASSIGN THE RESPECTIVE DATA AND POINTER SECTIONS OF THE NODE
   ! IF T POINTS TO THE FIRST NODE IT MEANS THE LIST IS REVERSED
   * CREATE A TEMPORARY TAIL VARIABLE TO STORE THE OLD TAIL(LAST NODE IN THE LIST)
   * SET THE TAIL OF THE LIST TO THE NEW NODE
   * SET THE PREV POINTER TO THE OLD TAIL(WHICH IS THE PREVIOUS NODE)
   * */

public:
    static void createNodeReverse(int x, int y) {
        // * CREATE A NEW NODE TO STORE THE NEW DATA
        Node *newNode = new Node();
        // * ASSIGN THE RESPECTIVE DATA AND POINTER SECTIONS OF THE NODE
        newNode->data = x;
        newNode->data2 = y;
        newNode->prev = nullptr;

        // * CREATE A TEMPORARY TAIL VARIABLE TO STORE THE OLD TAIL(LAST NODE IN THE LIST)
        Node *tempHead = head;
        // * SET THE TAIL OF THE LIST TO THE NEW NODE
        head = newNode;
        // * SET THE PREV POINTER TO THE OLD TAIL(WHICH IS THE PREVIOUS NODE)
        head->prev = tempHead;
    }


    //! THIS IS NOT PART OF THE ASSIGNMENT, THIS IS JUST TO TEST IF ITS WORKING
public:
    static void print() {
        struct Node *temp = head;
        std::cout << "List is: " << endl;
        while (temp != nullptr) {
            printf(" %d", temp->data);
            cout << " -";
            printf(" %d", temp->data2);
            cout << endl;
            temp = temp->prev;
        }
        std::cout << "\n";
    }
};

//class

int main() {
    head = nullptr;
    LinkedList::createNodeReverse(34, 12);
    LinkedList::createNodeReverse(6, 23);
    LinkedList::print();

    return 0;

}
