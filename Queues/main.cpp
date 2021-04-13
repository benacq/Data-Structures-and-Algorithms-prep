#include <iostream>

#define MAX_SIZE 10
using namespace std;

class Queue {
private:
    int front, rear;
    int *A;
public:
    Queue() {
        A = new int[MAX_SIZE];
        front = -1, rear = -1;
    }

    void enqueue(int data) {
        if ((rear + 1) % MAX_SIZE == front) {
            std::cout << "Queue is full\n";
        } else if (isEmpty()) {
            front = 0, rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        A[rear] = data;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Stack underflow, queue is empty\n";
            return;
        } else if (front == rear) {
            front = -1, rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }

    }

    void frontElem() {
        if (front != -1)
            std::cout << A[front];
    }

    bool isEmpty() const {
        if (front == -1 && rear == -1) {
            return true;
        }
        return false;
    }

//    void print() {
//        for (int i = 0; i < MAX_SIZE; ++i) {
//            std::cout << A[i] << " ";
//        }
//    }
};


int main() {
    Queue queue;
    queue.enqueue(3);
    queue.enqueue(5);
    queue.enqueue(4);
    queue.enqueue(34);
    queue.enqueue(23);
    queue.enqueue(64);
    queue.enqueue(49);
    queue.enqueue(47);
    queue.enqueue(74);
    queue.enqueue(14);
    queue.dequeue();
    queue.dequeue();
    queue.enqueue(154);
    queue.enqueue(495);

    return 0;
}
