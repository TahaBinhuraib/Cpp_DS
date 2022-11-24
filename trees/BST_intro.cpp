#include<iostream>
using namespace std;

struct BST{
    int data;
    BST* left;
    BST* right;


};
BST* get_node(int data){
    BST* new_node = new BST();
    new_node -> data = data;
    new_node->left = new_node->right = NULL;
    return new_node;
    
}
void insert_node(BST* root, int data){

}
int main(){
    BST* root_ptr;
    root_ptr = NULL;

}