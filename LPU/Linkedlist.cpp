#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data ;
    Node *next;
    Node(int val) {
        data=val;
        next=nullptr;
    }
};
class SLL {
public:
    Node *head;
    SLL() {
        head=nullptr;
    }
    void insertInBeg(int val) {
        Node *newnode=new Node(val);
        newnode->next=head;
        head=newnode;
    }
    void display() {
        if (head==nullptr) {
            cout<<"List is empty";
        }
        else {
            Node *temp=head;
            while (temp!=nullptr) {
                Node *temp=head;
                cout<<temp->data;
                temp=temp->next;
            }
        }
    }
    void deleteatend() {
        
    }
};
int main() {

    return 0;
}