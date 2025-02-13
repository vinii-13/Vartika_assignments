#include<bits/stdc++.h>
using namespace std;

// tree traversals using recursion
// traversal types: pre order, post irder, in order, level order(without recursion)
class node {
public:
	int data;
	node* left;
    node* right;

	node(int data) {
		this->data = data;
		left = NULL, right = NULL;
	}
};
void preorder(node* curr){
    if(curr == NULL){
        return;
    }
    
    cout<<curr->data<<" ";
    preorder(curr->left);
    preorder(curr->right);
    
}

void postorder(node* head){
    if(head == NULL){
        return;
    }
    postorder(head->left);
    postorder(head->right);
    cout<<head->data<<" ";
}

void inorder(node* head){
    if(head == NULL){
        return;
    }
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
}


int main() {

	node* head = new node(12);
    head->left = new node(6);
    head->right = new node(2);

    head->left->left = new node(3);
    head->left->right = new node(7);

    head->right->left = new node(8);
    head->right->right = new node(9);
	
    preorder(head);
    cout<<endl;

    postorder(head);
    cout<<endl;

    inorder(head);
    cout<<endl;

	return 0;
}