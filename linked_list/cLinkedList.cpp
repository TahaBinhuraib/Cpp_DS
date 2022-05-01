#include<iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node *next;
    Node(){
        key=0;
        data=0;
        next=NULL;
    }
};

class circularLL{
    public:
        Node* head;

    circularLL(){
        head=NULL;
    }

    Node* node_exists(int k){
        Node* temp = NULL;
        Node* ptr = head;
        //if there are no nodes in circularLL return null 
        if(ptr==NULL){
            return temp;
        }
        else{
            do{
                if(ptr->key==k){
                    temp=ptr;
                }
                ptr=ptr->next;
            }
            while(ptr!=head);
            return temp;
        }
    }

    void append_node(Node* node){
        if(node_exists(node->key)!=NULL){
            cout<<"node exists. Can't append"<<endl;
        }
        else{
            if(head==NULL){
                head=node;
                node->next=head;
                cout<<"node appended!"<<endl;
            }
            else{
                Node* ptr=head;
                while(ptr->next!=head){
                    ptr=ptr->next;
                }
                ptr->next=node;
                node->next=head;
                cout<<"node appended!";
            }
        }
    }

    void prepend_node(Node* node){
        if(node_exists(node->key)!=NULL){
            cout<<"node exists. Cant prepend node"<<endl;
        }
        else{
            if(head==NULL){
                head=node;
                node->next=head;
                cout<<"node prepended at head position"<<endl;
            }
            else{
                Node* ptr=head;
                while(ptr->next!=head){
                    ptr=ptr->next;
                }
                ptr->next = node;
                node->next = head;
                head = node;
                cout<<"node prepended"<<endl;
            }
        }

    }
    // Delete node
    // We are delinking the linked list
    // We should delete the nodes from RAM
    void delete_node(int k){
        Node* ptr = node_exists(k);
        if(ptr==NULL){
            cout<<"no node exists."<<endl;
        }
        else{
            if(ptr == head){
                if(head->next == NULL){
                    head = NULL;
                    cout<<"head node unlinked"<<endl;
                }
                else{
                    Node* ptr1 = head;
                    while(ptr1->next!=head){
                        ptr1 = ptr1->next;
                    }
                    ptr1->next = head->next;
                    head = head->next;
                }
            }
            else{
                Node* temp = NULL;
                Node* prev_ptr = head;
                Node* current_ptr = head->next;
                while(current_ptr!=NULL){
                    if(current_ptr->key == k){
                        temp = current_ptr;
                        current_ptr = NULL;
                    }
                    else{
                        prev_ptr = prev_ptr->next;
                        current_ptr = current_ptr->next;
                    }
                }
            prev_ptr->next = temp->next;
            cout<<"deleted node"<<endl;
            }
        }
    }
    
    void insert_node(int k, Node* node){
        Node* ptr = node_exists(k);
        int key_new_node = node->key;
        if(ptr==NULL){
            cout<<"no node exists with this key value: "<<k<<endl;
        }
        else{
            if(node_exists(key_new_node)!=NULL){
                cout<<"node already exists!"<<endl;
            }
            else{
                if(ptr->next == head){
                    node->next = head;
                    ptr->next = node;
                    cout<<"node inserted at the end of the list!"<<endl;
                }
                else{
                    node->next = ptr->next;
                    ptr->next = node;
                    cout<<"node inserted!"<<endl;
                }
            }
        }
        
    }
};


