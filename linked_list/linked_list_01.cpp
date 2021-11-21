#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node *next;
};
void LL_traversel(Node *ptr){
      while(ptr!=NULL){
          cout<<ptr->data << " ";
          ptr=ptr->next;
      }
}

int insert_end(Node *ptr,Node *new_node){
      Node *head=ptr;
      while(ptr!=NULL){
          ptr=ptr->next;
      }
      ptr->next=new_node;
      new_node->next=NULL;
      LL_traversel(head);
      return 0;
}
int main()
{
    Node *first=NULL;
    Node *second=NULL;
    Node *third=NULL;
    first=new Node();
    second=new Node();
    third=new Node();


    first->data=3;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=1;
    third->next=NULL;

    cout<<"The linked list are:-"<<endl;
    LL_traversel(first);

    cout<<"Enter the choice:-"<<endl;
    cout<<"1 to insert, 2 to delete, 3 to insert at the end:-"<<endl;
    int ch;
    cin>>ch;

    int num;
    cout<<"Enter no.-";
    cin>>num;
    Node *new_node=NULL;
    new_node=new Node();
    new_node->data=num;
    insert_end(first,new_node);

    // switch(ch){
    //     case 1: 
    //            break;
    //     case 2:
    //             break;
    //     case 3:int num;
    //            cout<<"Enter no.-";
    //            cin>>num;
    //            Node *new_node=NULL;
    //            new_node=new Node();
    //            new_node->data=num;
    //            insert_end(first,new_node);
    //            break;
    //     //case 4: break;
    // }
    
}