#include<iostream>
using namespace std;

class node{
   public:
   int data;
   node*link;

   node(int val)
   {
     data=val;
     link=NULL;
   }
};
void newNode(node*&head,int d)
{
   node*temp=new node(d);
   if(head==NULL)
   {
      head=temp;
      return;
   }
   else{
      node*t=head;
      while(t->link!=NULL)
      {
         t=t->link;
      }
      t->link=temp;
   }
}
void insert_pos(node*&head,int pos,int val)
{
   int c=1;
   node*temp=new node(val);
   node*t=head;
   while(t!=NULL && c+1!=pos)
   {
      t=t->link;
      c++;
   }
   node*tp=t->link;
   t->link=temp;
   temp->link=tp;
}
void insert_beg(node*&head,int val)
{
   node*temp=new node(val);
   temp->link=head;
   head=temp;
}
int del(node*&head,int pos)
{
    node*temp=head;
    node*t;
    int c=1;
    while(temp!=NULL && pos==c+1)
    {
      temp=temp->link;
      c++;
    }
    t=temp->link;
    temp->link=t->link;

    return(t->data);
}
int del_val(node*&head,int val)
{
      node*temp=head;
      node*t;
      int c=0;
      while(temp!=NULL)
      {
         if(val==temp->link->data)
         {
            t=temp->link;
            temp->link=t->link;
            c=1;
         }
         temp=temp->link;
      }
      return(c);
}
int del_first_val(node*&head,int val)
{
      node*temp=head;
      node*t;
      int c=0;
      while(temp!=NULL && val!=temp->link->data)
      {
         temp=temp->link;
      }
            t=temp->link;
          temp->link=t->link;
      return(t->data);
}
int del_beg(node*&head)
{
   node*temp=head;
   node*t=temp->link;
   head=t;
   return(temp->data);
}
void display(node*head)
{
   int c=0;
   while(head!=NULL)
   {
      cout<<"  "<<head->data<<" -> ";
      head=head->link;
      c++;
   }
   cout<<"The Number of nodes are "<<c<<endl;
}
int main()
{
   int value;
   int n,pos,c,opt,d;
   int val;
   node*head=NULL;
   while(1)
   {
      cout<<"Choose your option \n1)ADD\n2)ADD_POSITION\n3)DELETE_VALUE_ALL\n4)DELETE_POS\n5)DELETE_BEGININIG\n6)ADD_BEGINING\n7)DELETE_VALUE_FIRST_ONE\n8)DISPLAY\n9)EXIT\n\n"<<endl;
      cin>>opt;

      switch (opt)
      {
      case 1:
      cout<<"Enter the Value : \n";
      cin>>value;
      newNode(head,value);
       break;
      case 2:
      cout<<"Enter the Value : \n";
      cin>>value;
      cout<<"Enter the Position : \n";
      cin>>pos;
      insert_pos(head,pos,value);
      break;
      case 3:
      cout<<"Enter the Value which is to deleted  all nodes :\n";
      cin>>val;
      d=del_val(head,val);
      break;
      case 4:
      cout<<"Enter the Position which is to deleted : \n";
      cin>>pos;
      d=del(head,pos);
      break;
      case 5:
      cout<<"Deleting First Node .."<<endl;
      d=del_beg(head);
      break;
      case 6:
      cout<<"Enter the Value : \n";
      cin>>value;
      insert_beg(head,value);
      break;
      case 7:
      cout<<"Enter the Value which is to deleted  all nodes :\n";
      cin>>value;
      d=del_first_val(head,value);
      break;
      case 8:
      display(head);
      break;
      case 9:
      n=0;
      break;
      }
   }
}