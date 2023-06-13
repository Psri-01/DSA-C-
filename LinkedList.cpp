#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val){ //head by ref not by value
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp=head;  //for traversal
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){ //to display LL
    node* temp=head;
    while(temp!=NULL){ //cuz when temp=NULL we've reached the end of the LL
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){ //if the first elem is the last elem
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next; //point the n-1th node to n+1th node
    delete todelete;
}

node* reverse(node* &head){ //iterative reversal
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr; //as prevptr is the new head
}

node* reverseRec(node* &head){
    //base case:
    if(head==NULL||head->next==NULL){
        return head;
    }
    //recursive case:
    node* newhead=reverseRec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

node* reversek(node* &head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL&&count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next=reversek(nextptr,k);
    }
    return prevptr; //as prevptr points t/w the new head
}

int getCount(node* head){
    node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count=count+1;
        temp=temp->next;
    }
    return count;
}

void sorting(node* head){
    node *i,*j;
    i=head;
    if(head==NULL){
        cout<<"The list is empty"<<endl;
    }
    else{
        for(i=head;i!=NULL;i=i->next){
            for(j=i->next;j!=NULL;j=j->next)
            {
                if(i->data>j->data){
                    int ptr=i->data;
                    i->data=j->data;
                    j->data=ptr;
                }
            }
        }
    }
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    //display(head);
    //insertAtHead(head,1);
    //display(head);
    //cout<<search(head,3)<<endl;
    //deletion(head,3);
    //deleteAtHead(head);
    display(head);
    //node* newhead=reverse(head);
    //node* newhead=reverseRec(head);
    //display(newhead);
    //int k=2;
    //node* newhead=reversek(head,k);
    //display(newhead);
    //cout<<getCount(head)<<endl;
    sorting(head);
    display(head);
    return 0;
}
