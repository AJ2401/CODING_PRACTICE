//Convert A Tree into Double Linked List
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int opt,item,n;
	struct noded*root=NULL;
	printf("Enter the Number of Nodes : \n");
	scanf("%d",&n);
	while(n>0)
	{
		printf("Choose your option :\n1)ADD \n2)Preorder\n3)Convert in DLL\n\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
			printf("Enter the Item: \n");
			scanf("%d",&item);
			Create(&root,item);
			break;
			case 2:
			printf("The Preorder of the Tree is : \n");
			preorder(root);
			break;
			case 3:
			convert(root);
			break;
			
			}
		n--;
	}
	return 0;

}
struct node
{
	struct node*left;
	struct node*right;
	int data;
};
void Create(struct node**root,int item)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->left=NULL;
	temp->right=NULL;
	struct node*t=*root;
	if(*root==NULL)
	{
		*root=temp;
	}
	else
	{
		int opt;
		printf("Choose your option : \n1)Right\n2)Left\n3)Right_Left_Most\n4)Left_Right_Most\n\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
			while(t->right!=NULL)
			{
				t=t->right;
			}
			t->right=temp;
			break;
			case 2:
			while(t->left!=NULL)
			{
				t=t->left;
			}
			t->left=NULL;
			break;
			case 3:
			t=t->right;
			while(t->left!=NULL)
			{
				t=t->left;
			}
			t->left!=NULL;
			break;
			case 4:
			t=t->left;
			while(t->right!=NULL)
			{
				t=t->right;
			}
			t->right=temp;
			break;

		}
	}
}
void convert(struct node*root)
{
	if(root==NULL || root->right==NULL && root->left==NULL)
	{
		printf("The Required Dll is : \n");
		display(root);
		return;
	}
	if(root->left!=NULL)
	{
		convert(root->left);

		struct node*temp=root->right;
		root->right=root->left;
		root->left=NULL;

		struct node*t=root;
		while(t->right!=NULL)
		{
			t=t->right;
		}
		t->right=temp;
	}
	convert(root->right);
}
void display(struct node*root)
{
	struct node*t=root;
	while(t->right!=NULL)
	{
		printf("  %d  ",t->data);
		t=t->right;
	}
}
void preorder(struct node*root)
{
	if(root==NULL)
	{
		return;
	}
	printf("  %d  ",root->data);
	preorder(root->left);
	preorder(root->right);
}
