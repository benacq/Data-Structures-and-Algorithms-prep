#include <iostream>

struct Node {
    int data;
    Node *next;
};

struct Node *head;

class LinkedList {

public:
    static void insertAtBeginning(int x) {
        Node *temp = new Node();
        temp->data = x;
        temp->next = head;
        head = temp;
    }


public:
    static void insertEnd(int x) {
        Node *temp = new Node();
        temp->data = x;
        temp->next = nullptr;
        if (head == nullptr) {
            head = temp;
            return;
        }

        Node *temp2 = head;
        while (temp2->next != nullptr) {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }


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


public:
    static void deleteNodeWithoutHead(Node *pointer) {
        Node *temp;
        temp = pointer->next;
        pointer->data = temp->data;
        pointer->next = temp->next;
        free(temp);
    }

public:
    static void deleteBeginning() {
        if (head == nullptr) return;
        Node *temp = head;
        head = head->next;
        free(temp);
    }

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
    LinkedList::insertAt(2, 1);
    LinkedList::insertAt(3, 2);
    LinkedList::insertAt(5, 3);
    LinkedList::insertAt(7, 4);
    LinkedList::insertAt(14, 5);
//    LinkedList::print();
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
