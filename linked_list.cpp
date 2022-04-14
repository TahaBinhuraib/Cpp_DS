#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void print(){
    Node* temp = head;
    cout<<"List is: ";
    while(temp!=NULL){
        cout<< temp->data<<' ';
        temp = temp->next;
    }
    cout<<endl;


}
void insert(int x){
    Node* temp = new Node();
    cout<<"added value!"<<endl;
    temp->data = x;
    temp->next = head;
    head = temp;

}
int main(){
head = NULL;
cout<<"how many values would you like to enter?"<<endl;
int length, value;
cin>>length;
for (int i=0; i<length; i++){
    cout<<"enter the number you would like to add to the list:"<<endl;
    cin>>value;
    insert(value);
    print();
    }
}