#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int v){
        value=v;
        next=NULL;
    }

};

void traverse(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node* &head, int val){
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next; 
    }
    // now temp is pointing to the last node
    temp->next = newNode;
}

void insertAtMiddle(Node* &head, int val, int position){

    if(position==1){
        insertAtHead(head,val);
        return;
    }
Node* newNode = new Node(val);
Node* prev = head;
int count = 1;
while(count<(position-1)){
    prev=prev->next;
    count++;
}

//prev is pointing to the node that should come before new node
newNode->next = prev->next;
prev->next = newNode;
}
int main(){

    // Node* node1 = new Node(1);
    // Node* node2 = new Node(2);
    // node1->next = node2;
    // Node* head = node1;
    // traverse(head);
    // insertAtHead(head, 3);
    // traverse(head);
    // insertAtEnd(head, 4);
    // traverse(head);
    // insertAtMiddle(head, 5, 3);
    // traverse(head);
    

    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    traverse(head);
    return 0;

}