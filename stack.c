#include<stdio.h>
#include<stdlib.h>
void welcome()
{
	printf("\n\n/*/**/*/****/*//*/*/*/*/\n");
	printf("\n    stacks and queues \n");
	printf("\n/*/**/*/****/*//*/*/*/*/\n");
}
int options()
{
	int a;
	printf("choose the data structure :\n");
	printf("\n1.stack\n2.queue\n3.exit\n\n");
	scanf("%d",&a);
	return a;
}
int input(int x)
{
	int b;
	printf("\nenter the size of ");
	if(x==1)
	{
		printf("stack");
	}
	else if(x==2)
	{
		printf("queue");
	}
	printf(" else enter 0 to go to main menu:\n\n>");
	scanf("%d",&b);
        return b;
}
int stack_display()
{
	int c;
	printf("\n-8-8-8-8-8-8-8-8-8-8-8-8-8-8-8\n\n");
	printf("           STACK \n" );
	printf("\n-8-8-8-8-8-8-8-8-8-8-8-8-8-8-8\n\n");
	printf("\n1.PUSH\n2.pop\n3.view stack\n4.back to previous menu\n\n>");
	scanf("%d",&c);
	return c;
}
int queue_display()
{
	int c;
	printf("\n-8-8-8-8-8-8-8-8-8-8-8-8-8-8-8\n\n");
	printf("           QUEUE \n" );
	printf("\n-8-8-8-8-8-8-8-8-8-8-8-8-8-8-8\n\n");
	printf("\n1.enuqeue\n2.dequeue\n3.view queue\n4.back to previous menu\n\n>");
	scanf("%d",&c);
	return c;
}
void push_enqueue(int n,int a[n],int *top,int j)
{
	if((*top)<n)
	{
		printf("\n\nenter the value to be ");
		if(j==1)
		{
			printf("pushed\n\n>");
		}
		else if (j==2)
		{
			printf("enqueued\n\n>");
		}
		scanf("%d",&a[(*top)]);
		printf("\n\nexecution successful\n\n");
	}
	else 
	{
		printf("\n\ndata struct is full!!\n\n");
		(*top)--;
	}
}
void pop(int n, int a[n],int *top)
{
	if((*top)==0)
	{
		printf("\n\nstack is empty\n\n");
	}
	else
	{
		(*top)--;
		printf("\n\n %d popped",a[(*top)]);
	}
}
void dequeue(int n ,int a[n],int *top)
{
	if((*top)==0)
	{
		printf("\n\nqueue is empty \n\n");
	}
	else
	{
		printf("\n\n%d dequeued ",a[0]);
		for(int i=0;i<(*top);i++)
		{
			a[i]=a[i+1];
		}
		(*top)--;
	}
}
void display(int n ,int a[n],int *top)
{
	if((*top)==0)
	{
		printf("\n\ndata structures empty \n\n");
	}
	else
	{
		for(int i=0;i<(*top);i++)
		{
			printf("\n\n%d\t",a[i]);
		}
		printf("\n\n");
	}
}
void stack_opt(int y ,int n ,int a[n], int *top)
{
	if(y==1)
	{
		push_enqueue(n,a,top,1);
		(*top)++;
	}
	else if (y==2)
	{
		pop(n,a,top);
	}
	else if(y==3)
	{
		display(n,a,top);
	}
	else
	{
		printf("\n\nInvalid options \n\n");
	}
}
void queue_opt(int y,int n,int a[n],int *i)
{
	if(y==1)
	{
		push_enqueue(n,a,i,2);
		(*i)++;
	}
	else if(y==2)
	{
		dequeue(n,a,i);
	}
	else if(y==3)
	{
		display(n,a,i);
	}
	else 
	{
		printf("\n\n invalid \n\n");
	}
}

int main()
{
	while(1)
	{
		while(1)
		{
			int n,x ;
			welcome();
			x=options();
			if(x==3)
			{
				exit(0);
			}
			else if(x>3)
			{
				printf("invalid option try again\n");
				break;
			}
			n=input(x);
			if(n==0)
			{
		        	break;
			}
			int i=0;
			while(1)
			{
				int a[n],y=0;
				if(x==1)
				{
					y=stack_display();
					if(y==4)
					{
						printf("\n\nnote : data will be deleted\n\n");
						break;
					}
					else
					{
						stack_opt(y,n,a,&i);
					}
				}
				else if(x==2)
				{
					y=queue_display();
					if(y==4)
					{
						printf("\n\nnote : data will be deleted\n\n");
						break;
					}
					else
					{
						queue_opt(y,n,a,&i);
					}
				}
			}
		}
	}
	return 0;
}









