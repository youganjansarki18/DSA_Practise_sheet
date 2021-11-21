#include<iostream>
using namespace std;

class Node{
    public:
      int value;
      Node *next;
};

class LinkedList{
    private:
       Node *head;
       Node *tail;
    public:
       LinkedList(){
           head=NULL;
           tail=NULL;
       }

    void push(int num){
         Node *temp=new Node();
         temp->value=num;
         temp->next=NULL;

         if(head==NULL){
             head=temp;
             tail=temp;
         }
         else{
             tail->next=temp;
             tail=tail->next;
         }
    }
    
    void show(){
        Node *ptr=head;
        while(ptr!=NULL){
            cout<<ptr->value<<" "<<endl;
            ptr=ptr->next;
        }
    }

    //This is an iterative approach
    //The time complexity of this algorithm will be O(n);
    void reverse(){
       Node *prev=NULL;
       Node *curr=head;
       Node *next=NULL;
       while(curr!=NULL){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       head=prev;
    }
    //This is a recursive approach
    void recursive_reverse(){

    }
};

int main()
{
    LinkedList first;
    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);
    first.push(50);
    first.show();

    cout<<"After reversal of LinkedList:-"<<endl;
    first.reverse();
    first.show();
}