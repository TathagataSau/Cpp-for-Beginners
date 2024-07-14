#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val = val;
        this->next = NULL;
    }

};
void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void displayrec(node* head){
    if(head == NULL) return;// base case
    cout<<head->val<<" "; // action
    displayrec(head->next); //call
}
void rev_display(node* head){
    if (head == NULL) return; // base case
    rev_display(head->next); // call
    cout<<head->val<<" "; //action
}
int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(90);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    displayrec(a);
    cout<<endl;
    rev_display(a);
    //display(a);
    /*
    node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    */

return 0;
    
}