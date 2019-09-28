/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct heap {
  int *arr;
  int size;
  int capacity;
};

struct heap* createHeap(int cap) {
    struct heap* h = (struct heap*) malloc(sizeof(struct heap));
    h->capacity = cap;
    h->size = 0;
    h->arr = (int*) malloc(h->capacity * sizeof(int));
    return h;
}

int left(int i) {
    return (2*i+1);
}

int right(int i) {
    return (2*i+2);
}

int parent(int i) {
    return (i-1)/2;
}

void swap(int *a , int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int getMin(struct heap* h) {
    return h->arr[0];
}

void insertKey (struct heap* h , int key) {
    if(h->capacity == h->size) {
        cout << "overflow";
        return;
    }
    h->size++;
    int i = h->size - 1;
    h->arr[i] = key;
    while(i!=0 && h->arr[parent(i)] > h->arr[i]) {
        swap(&h->arr[parent(i)] , &h->arr[i]);
        i = parent(i);
    }

}


void minHeapify (struct heap* h , int i) {
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if(l < h->size && h->arr[l] < h->arr[i])
        smallest = i;
    if(r < h->size && h->arr[r] < h->arr[smallest])
        smallest = r;
    if(smallest != i) {
        swap(&h->arr[i],&h->arr[smallest]);
        minHeapify(h,smallest);
    }
}

int extractMin(struct heap *h) {
    if(h->size <= 0) {
        return INT_MAX;
    }
    if(h->size == 1) {
        h->size--;
        return h->arr[0];
    }

    int root = h->arr[0];
    h->arr[0] = h->arr[h->size-1];
    h->size--;
    minHeapify(h,0);

    return root;
}


int main()
{
    struct heap* h = createHeap(100);
    insertKey(h,3);
    insertKey(h,2);
    insertKey(h,1);
    insertKey(h,15);
    insertKey(h,5);
    insertKey(h,4);
    insertKey(h,45);
    cout << extractMin(h);
    cout << getMin(h);
    return 0;
}
