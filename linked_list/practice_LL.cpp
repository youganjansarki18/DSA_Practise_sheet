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

   void insert_at_head(int d){
        Node *curr=new Node();
        curr->value=d;
        curr->next=head;
        head=curr;
   }

   void insert_at_end(int d){
        // Node *ptr=head;
        // while(ptr!=NULL){
        //     ptr=ptr->next;
        // }
        // Node *curr=new Node();
        // curr->value=d;
        // curr->next=NULL;
        // ptr->next=curr;
        // tail=ptr;

        Node *tmp = new Node;
        tmp->value= d;
        tmp->next = NULL;

       if(head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tail->next;
    }
   }

   void after(int d,int val){
       Node *curr=new Node();
       curr->value=val;
       curr->next=NULL;

       Node *ptr=head;
       while (ptr->value!=d)
       {
           ptr=ptr->next;
       }
       curr->next=ptr->next; // This will be the first
       ptr->next=curr;
   }

   void delete_node(int d){
       Node *curr=head;
       while(curr!=NULL){
          if(curr->next->value==d && curr->next!=NULL){
              Node *temp=curr->next;
              curr->next=curr->next->next;
              delete temp;
          }
          else{
              curr=curr->next;
          }
       }
   }
};

int main()
{
    LinkedList first;
    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);
    first.show();

    cout<<"After Adding at the front"<<endl;
    first.insert_at_head(69);
    first.show();

    cout<<"After Adding at the end"<<endl;
    first.insert_at_end(96);
    first.show();

    cout<<"After Adding after a particular node"<<endl;
    first.after(20,101);
    first.show();

    cout<<"After deletion of a no."<<endl;
    first.delete_node(40);
    // first.delete_node(69);
    // first.delete_node(101);
    // first.delete_node(30);
    first.show();
}