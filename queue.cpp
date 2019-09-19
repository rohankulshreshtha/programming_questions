/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std;

struct queue {
  int *arr;
  int front,rear,size;
  int capacity;
};

struct queue* allocateQueue(int capacity) {
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->front = q->size = 0;
    q->rear = capacity-1;
    q->capacity = capacity;
    q->arr = (int*)malloc(q->capacity * sizeof(int));
}

int isFull(struct queue* q){
    return (q->size == q->capacity);
}

int isEmpty(struct queue* q) {
    return (q->size == 0);
}

void enque(struct queue* q, int item) {
    if(isFull(q))
        return;
    q->rear = (q->rear + 1) % q->capacity;
    q->arr[q->rear] = item;
    q->size++;
}

int deque(struct queue* q) {
    if(isEmpty(q))
        return -1;
    int popped = q->arr[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size--;
    return popped;
}

int front(struct queue* q) {
    if(isEmpty(q))
        return -1;
    return q->arr[q->front];

}

int rear(struct queue* q) {
    if(isEmpty(q))
        return -1;
    return q->arr[q->rear];
}

int main()
{
    struct queue* q = allocateQueue(5);
    enque(q,1);
    enque(q,2);
    enque(q,3);
    cout << deque(q) << endl;
    cout << front(q) << endl << rear(q) << endl;
    return 0;
}
