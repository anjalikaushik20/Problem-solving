//print height of a tree
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//node
struct node{
    int data;
    node* left;
    node* right;
};
//new-node
node* newNode(int n){
    node* Node = new node();
    Node->data = n;
    Node->left = NULL;
    Node->right = NULL;

    return Node;
}
//function
int height(node *root){
    int h, l, r;

    if(root == NULL)
        return 0;
    else{
        l = height(root->left);
        r = height(root->right);
    }

    h = max(l,r)+1;
    return h;
}

//driver code
int main(){
    //formation of a tree
    //root
    node* root = newNode(10);
    //layer-1
    root->left = newNode(20);
    root->right = newNode(30);
    //layer-2
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);
    //layer-3
    root->left->left->left = newNode(80);
    root->left->left->right = newNode(90);

    cout<<height(root)<<endl;

    return 0;
}