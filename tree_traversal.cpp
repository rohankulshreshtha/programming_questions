/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
};

struct Node* allocateNode(int data) {
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void inorderTraversal(struct Node *root) {
    if(root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data;
    inorderTraversal(root->right);
}

void preorderTraversal(struct Node *root) {
    if(root == NULL)
        return;
    cout << root->data;
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

void postorderTraversal(struct Node *root) {
    if(root == NULL)
        return;
    inorderTraversal(root->left);
    inorderTraversal(root->right);
    cout << root->data;
}

void levelorderTraversal(struct Node *root) {
    queue<struct Node*> q;
    q.push(root);
    while(!q.empty()){
        struct Node *item = (q.front());
        q.pop();
        cout << item->data;
        if(item->left != NULL)
            q.push(item->left);
        if(item->right != NULL)
            q.push(item->right);
    }
}

int main()
{
    struct Node *root = allocateNode(1);
    root->left = allocateNode(2);
    root->right = allocateNode(3);
    root->left->left = allocateNode(4);
    root->left->right = allocateNode(5);
    root->right->left = allocateNode(6);
    root->right->right = allocateNode(7);

    inorderTraversal(root);
    cout << endl;
    preorderTraversal(root);
    cout << endl;
    postorderTraversal(root);
    cout << endl;
    levelorderTraversal(root);

    return 0;
}
