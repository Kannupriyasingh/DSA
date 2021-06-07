#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class linked_node{
public:
    int data;
    linked_node* left;
    linked_node* right;
};

linked_node* createnode(int val){
    linked_node* n = new linked_node();
    n->data = val;
    n->left = n->right = NULL;
    return n;
}

void preorder_traversal(linked_node* root){
    if(root != NULL){
        cout << root->data << " ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void inorder_traversal(linked_node* root){
    if(root != NULL){
        inorder_traversal(root->left);
        cout << root->data << " ";
        inorder_traversal(root->right);
    }
}

void postorder_traversal(linked_node* root){
    if(root != NULL){
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout << root->data << " ";
    }
}
int main()
{
    linked_node* p1 = createnode(5);
    linked_node* p2 = createnode(7);
    linked_node* p3 = createnode(8);
    p1->left = p2;
    p1->right = p3;
    
    preorder_traversal(p1);
    cout << endl;
    inorder_traversal(p1);
    cout << endl;
    postorder_traversal(p1);
    return 0;
}
