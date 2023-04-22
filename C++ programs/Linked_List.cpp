#include<iostream>
using namespace std;

class node
{
     public:
     int data;
     node*link;
     node(int val){
          data=val;
          link=NULL;
     }   
};
void add_end(node**head,int val)
{
    node*n=new node(val);

    node*temp=*head;
    while(temp->link!=NULL)
    {
         temp=temp->link;
    }
    temp->link=n;
}
void add_beg(node**head,int val)
{
     node*n=new node(val);
     n->link=*head;
     *head=n;
}
void display(node*head)
{
     node*n=head;
     int c=0;
     while(n->link!=NULL)
     {
          cout<<n->data<<"->";
          n=n->link;
          c++;
     }
     cout<<"Number of nodes : "<<c;
}
int del_pos(node**head,int pos)
{
     int c=0;
     node*t=*head;
     while(t->link!=NULL)
     {
          c++;
          if(c+1==pos)
          {
               node*temp=t->link;
               t->link=temp->link;
               free(temp);
          }
          t=t->link;
     }
}
int del(node**head,int key)
{
     node*t=*head;
     while(t->link!=NULL)
     {
          if(key==t->data)
          {
               node*temp=t->link;
               t->link=temp->link;
               free(temp);
          }
          t=t->link;
     }
}
int search(node*head,int val)
{
     node*t=head;
     while(t->link!=NULL)
     {
          if(val==t->data)
          {
               return(1);
          }
          t=t->link;
     }
     return(0);
}
int del_last(node**head){
     node*t=*head;
     while(t->link!=NULL)
     {
          t=t->link;
     }
               node*temp=t->link;
               t->link=temp->link;
               free(temp);
}
int main()
{
     int opt,val,d,c,pos;
     int n=1;
     node*head=NULL;
     while(n>0){
     cout<<"Choose your option : \n1)APPEND \n2)ADD BEG \n3)DEL POS\n4)DEL FIRST\n5)DEL LAST\n6)DISPLAY\n7)Search a Key\n8)END \n\n";
     cin>>opt;
     switch(opt)
     {
          case 1:
          cout<<"Enter the DATA at END : \n";
          cin>>val;
          add_end(&head,val);
          break;
          case 2:
          cout<<"Enter the DATA at BEG  : \n";
          cin>>val;
          add_beg(&head,val);
          break;
          case 3:
          cout<<"Enter the Position that to be Deleted : \n";
          cin>>pos;
          d=del_pos(&head,pos);
          cout<<d<<" is is being Deleted ! "<<endl;
          break;
          case 4:
          cout<<"Enter the  Data which is to be DELETED : \n";
          cin>>val;
          d=del(&head,val);
          cout<<d<<" is being Deleted ! "<<endl;
          break;
          case 5:
          d=del_last(&head);
          cout<<d<<" is being Deleted ! "<<endl;
          break;
          case 6:
          cout<<"The Linked List is : \n";
          display(head);
          break;
          case 7:
          cout<<"Enter the Element to be Searched : "<<endl;
          cin>>val;
          c=search(head,val);
          if(c==1)
          {
               cout<<val<<" is Present   ! "<<endl;
          }
          else if(c==0)
          {
                 cout<<val<<" is not  Present   ! "<<endl;
          }
          break;
          case 8:
          n=0;
          break;
     }
     }
}