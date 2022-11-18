#include<stdio.h>
#include<conio.h>
#define size 5
int stack[size];
int top=-1;
void push(int);
void pop();
void peak();
void display();
void main()
{
	int ch,n,i;
	printf("\n1.Push:\n2.pop:\n3.peak:\n4.display:\n5.Exit");
	while(i<=5)
	{
	 printf("one from one option:\n");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	 	case 1:   printf("\nEnter data for stack:");
	 	          scanf("%d",&n);
	 	          push(n);
	 	          break;
	 	case 2:   pop();
		          break;
	    case 3:   peak();
		          break;
	    case 4:   display();
	              break;
	    case 5:   printf("Exit");
		          break;
         deafult: printf("Enter valid choice:");
	};
	    
	 	        
    }
}

void push(int n)
{
	if(top==size-1)
	{
		printf("stack is full ");
	}
	else
	{
		top=top+1;
		stack[top]=n;
	}
	}
	void pop()
	{
		if(top==-1)
		{
			printf("stack is empty:");
		}
		else
		{
			int data;
			data=stack[top];
			top=top-1;
			printf("delete element=%d",data);
			
		}
	}

	void peak()
	{
		if(top==-1)
		{
			printf("stack is empty:");
		}
		else
		{
		printf("stack=%d",stack[top]);	
		}
	}
	void display()
	{
		if(top==-1)
		{
			printf("stack is empty:");
		}
		else
		{
			int i;
			for(i=top;i>=0;i--)
			{
				printf("%d\t",stack[i]);
			}
		}
	}
