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
void InsertatMiddle(int  pos,int data,Node *&head,Node *&tail){
    if (pos==1){
        InsertatHead(head, data);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertatTail(tail,data);
        return;
    }
    Node *insertnode=new Node(data);
    insertnode->next=temp->next;
    temp->next=insertnode;
}
void InsertatTail(Node *&tail,int data){
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