#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

node* buildTree(node* root) { 
    // CREATING A TREE IN RECURSIVE WAY

    cout<<"Enter this data: "<<endl;
    int data;
    cin>> data;
    root = new node(data);

    if(data == -1) {
        return NULL;

    }

    cout<<"Enter data for inserting in left "<<data <<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter data for inserfing in right" <<data<<endl;
    root -> right = buildTree(root -> right);
    return root;
} 


int main() {

    node* root = NULL;
    
    // CREATING A TREE 

    root = buildTree(root); 

    return 0;


}