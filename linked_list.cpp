/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node* allocateNode(int data) {
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void printList(struct Node *head) {
    struct Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

int main()
{
    struct Node *first = allocateNode(1);
    struct Node *second = allocateNode(2);
    struct Node *third = allocateNode(3);
    first->next = second;
    second->next = third;
    printList(first);
    return 0;
}
