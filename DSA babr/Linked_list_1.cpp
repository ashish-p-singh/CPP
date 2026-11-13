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
    Node* temp=new Node(12);
    temp->next=head;
    head=temp;
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
    Node *head= node1;
    InsertatHead(head,12);
    print(head);
}