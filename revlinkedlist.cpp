// reverse linked list
#include <bits/stdc++.h>
using namespace std;
void Reverse(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return prev;
}