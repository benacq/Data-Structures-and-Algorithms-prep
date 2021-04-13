#include <iostream>
#include <vector>


struct Node {
    int data;
    Node *next;
};

struct Node *head;


class LinkedList {

    //INSERT AT BEGINNING
public:
    static void insertAtBeginning(int x) {
        Node *newNode = new Node();
        newNode->data = x;
        newNode->next = head;
        head = newNode;
    }

//INSERT AT END
public:
    static void insertEnd(int x) {
        Node *newNode = new Node();
        newNode->data = x;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }


    //INSERT AT GIVEN POSITION
public:
    static void insertAt(int data, int position) {
        auto *temp = new Node();
        temp->data = data;
        temp->next = nullptr;

        if (position == 1) {
            temp->next = head;
            head = temp;
            return;
        }

        Node *temp2 = head;
        for (int i = 0; i < position - 2; ++i) {
            temp2 = temp2->next;
        }

        temp->next = temp2->next;
        temp2->next = temp;

    }

    /*
       * Given a pointer to a node in a Linked List insert a new node after the given Node (that's basically the question)
       * NB my i am using int as my list data, you can use string or any data you want, just edit the node struct
    */
public:
    static void insertAfterNode(int data, Node *x) {
        /*
         * data is what to insert and x is the node pointer we were given
         * We assume the list is not empty because if it was, the node x wouldn't exist
         * So our base case is to check if the node x is the only node in the list(ie. if it is equal to the head)
         * */
        auto *newNode = new Node(); //first create a node object
        newNode->data = data; // set data to the incoming data
        newNode->next = nullptr; // we assume that is the only node so we set the pointer to null pointer

        if (x->next == head->next) {
            // * if the pointer of x is equal to the pointer of head, it means they are the same(ie x is the only node in the list)
            // * so we now point the pointer of the head to the new node we created and return.
            head->next = newNode;
            return;
        }
        /*
         * If the node is not the only node in the list, that means we have to loop and search for x, then we set its pointer to our new node
         * In order not to lose the reference to our head pointer, we create a temporary variable to use in our loop
         * */
        Node *temp = head;
        while (temp->next != x) {
            /*
            * we are looking for a node that has its pointer pointing to x(note that temp marks the beginning of the list ie. head)
            * so starting from the beginning we loop and check each node if it has a pointer matching x
            * at each iteration we reset temp to the next node(until we find what we are looking for)
            * */
            temp = temp->next;
        }

        /*
        * so at this point temp should now have found x so it will contain the pointer to x
        * x initially was pointing to some other node, since we want to insert a new node, our new node should point to what x was pointing to(so that we don't break the link)
        * xpointer variable stores the current next node after x
        * after we store it, we can now give that position to our new node.
        * after inserting our new node, we then point our new node to that pointer
        * */
        Node *xpointer = x->next; // store x current next pointer to keep the reference
        temp->next = newNode; // replace x pointer with our new node
        newNode->next = xpointer; // point our new node to x's initial nex pointer(ie xpointer)
    }




    //DELETE AT GIVEN POSITION
public:
    static void deleteNodeAt(int position) {
        struct Node *temp = head;

        if (position == 1) {
            head = temp->next;
            free(temp);
            return;
        }
        for (int i = 0; i < position - 2; ++i) {
            temp = temp->next;
            struct Node *temp2 = temp->next;
            temp->next = temp2->next;
            free(temp2);
        }
    }


    //DELETE WITHOUT HEAD POINTER
public:
    static void deleteNodeWithoutHead(Node *nodeToDelete) {
        Node *temp;
        //SET TEMP TO THE NEXT NODE
        temp = nodeToDelete->next;

        //SET POINTER DATA TO NEXT NODE DATA
        nodeToDelete->data = temp->data;
        nodeToDelete->next = temp->next;
        free(temp);
    }

    //DELETE AT BEGINNING
public:
    static void deleteBeginning() {
        if (head == nullptr) return;
        Node *temp = head;
        head = head->next;
        free(temp);
    }


    //DELETE THE END
public:
    static void deleteEnd() {
        if (head == nullptr) return;
        Node *temp, *prev;
        if (head->next == nullptr) {
            temp = head;
            head = nullptr;
            free(temp);
            return;
        }
        temp = head;
        while (temp->next != nullptr) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = nullptr;
        free(temp);


    }

//DELETE THE MIDDLE ELEMENT OR NODE
public:
    static void middleElement() {
        if (head == nullptr) return;
        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        std::cout << "Middle element is: " << slow->data << std::endl;

    }

//REVERSE THE WHOLE SHOW (EG. CREATE ---> ETAERC)
public:
    static void reverse() {
        Node *prev, *curr, *n;
        prev = nullptr;
        curr = head;
        while (curr != nullptr) {
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        head = prev;
    }

//WHEN THE FIRST NODE POINTS TO THE LAST NOTE
public:
    static bool hasLoop() {
        if (head == nullptr) return false;
        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow) {
                std::cout << "List has a loop" << std::endl;
                return true;
            }
        }
        std::cout << "List has no loop" << std::endl;
        return false;
    }

public:
    static void print() {
        struct Node *temp = head;
        std::cout << "List is: ";
        while (temp != nullptr) {
            printf(" %d", temp->data);
            temp = temp->next;
        }
        std::cout << "\n";
    }

};


int main() {
    head = nullptr;
    Node *node = new Node();
    node->data = 2;
    node->next = nullptr;

    LinkedList::insertAtBeginning(2);
    LinkedList::insertAfterNode(5, node);
//    LinkedList::insertAtBeginning(22);
//    LinkedList::insertAt(2, 1);
//    LinkedList::insertAt(3, 2);
//    LinkedList::insertAt(5, 3);
//    LinkedList::insertAt(7, 4);
//    LinkedList::insertAt(14, 5);
    LinkedList::print();
//    LinkedList::middleElement();
//    LinkedList::reverse();
//    LinkedList::hasLoop();
//    LinkedList::deleteNodeAt(3);
//    LinkedList::print();

//    std::cout << "How many numbers do you want to add? \n";
//    int n, x;
//    std::cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        std::cout << "Enter the number \n";
//        std::cin >> x;
////        LinkedList::insertAtBeginning(x);
//        LinkedList::insertEnd(x);
//        LinkedList::print();
//    }
    return 0;
}
