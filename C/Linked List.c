	#include<stdio.h>
	#include<stdlib.h>
	// Program to Insert, Delete and Print a Linked List.
	struct node {
	 int data;
	 struct node* next;
	};
	struct node *head;		//GLOBAL DECLATLRATION

	//							Inserting numbers at the start (head).
	void Insert(int n)
	{
		struct node* temp=(struct node*)malloc(sizeof(struct node));
		temp->data=n;

		temp->next=head;
		head=temp;

	}
	//							Insert number at a given location.
	void InsertN(int data, int n)
	{
		int i;
		struct node* temp1 = (struct node*)malloc(sizeof(struct node));
		temp1->data=data;
		temp1->next=NULL;
		if(n==1)
		{
			temp1->next=head;
			head=temp1;
			return;
		}
		struct node* temp2 =head;

		for (i = 0; i < (n-2); i++)
			temp2=temp2->next;
			
		temp1->next=temp2->next;
		temp2->next=temp1;
		
	}
	// 							Print the Linked List.
	void Print(struct node* temp)
	{
		temp= head;
		printf("Number:\n");
		while(temp!=NULL)
		{
			printf(" %d ", temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
							// Deleting a node from the LL.
	void Delete(int n)
	{	printf("no at pos %d to be deleted: \n", n);
		struct node* temp1=head;
		if(n==1)
		{
			head=temp1->next;
			free(temp1);
			return;
		}
		int i;
		for (int i = 0; i < n-2; i++)
		{
			temp1=temp1->next;   //temp1 points to n-1 th node
			struct node* temp2 = temp1->next;
			temp1->next=temp2->next;
			free(temp2);
		}
	}
	//							Main Function
	int main()
	{
		 head = NULL;

		int size,x,i,n,num,pos;
		printf("How many numbers?\n");
		scanf("%d",&size);
	
		for (i = 0; i < size; i++)
		{
			printf("Enter Element: ");
			scanf("%d",&x);
			Insert(x);
			Print(head);
		}

		InsertN(69,2);
		InsertN(100,4);
		Print(head);
		printf("Enter number and its position:");
		scanf("%d %d",&num,&pos);
		InsertN(num,pos);
		Print(head);
		printf("\nEnter a position to be deleted: ");
		scanf("%d",&n);
		Delete(n);
		Print(head);
		
		return 0;
	}