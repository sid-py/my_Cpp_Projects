#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;


    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }

};

int main(){
    Node* root = new Node('a');

    root->left = new Node('b');
        root->left->left = new Node('d');
        root->left->right = new Node('e');
    root->right = new Node('c');
        root->right->left = new Node('f');
        

/*  Binary Tree representation
                     a
                    / \
                   b   c
                  / \   \
                 d   e   f
*/

}