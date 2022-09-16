#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


//func. to insert node at first
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}


//func. to insert node at end
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

//func. to insert node at given position
void insertBetween(Node* &head, Node* &tail, int pos, int data){
    if(pos == 1){
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count<pos-1){
        temp= temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}

// Traversing Through linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
 
}

int main(){

    // creating node object
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,5);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertBetween(head, tail, 4, 25);

    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data;

}