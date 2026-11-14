#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertatHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void InsertatTail(Node *tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}
void print(Node *&head){
    Node *temp=head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp=temp -> next;
    }
}
int main(){
    Node* node1=new Node(5);
    cout<<node1->data<<endl;
    Node *tail= node1;
    InsertatTail(tail,12);
    print(tail);  
}