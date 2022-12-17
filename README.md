# include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size],top=-1;
void push(int);
void pop();
void peek();
void display();
void main()
{
int ch,n,i=1;
printf("\n1.Push:\n2.nd pop:\n3.peek:\n4.display\n5.Exit");
while(i<=5){
printf("\nchose one from options:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:     printf("Enter data in stack:");
            scanf("%d",&n);
            push(n);
            break;
case 2:     pop();
            break;
case 3:     peek();
            break;
case 4:     display();
            break;
case 5:     printf("exit");
            break;
default:    printf("enter valid option:");
};
}
}
void push(int n){
if(top==size-1)
{
    printf("stack is full");
}
else
{
top++;
stack[top]=n;
}
}
void pop(){
if(top==-1)
{
    printf("stack is empty:");
}
else{
    int data;
    data=stack[top];
    top=top-1;
    printf("delete element=%d",data);
}
}
void peek(){
if(top==-1)
{
    printf("stack is empty:");
}
else{
    printf("element=%d",stack[top]);
}
}
void display()
{
int p;
if(top==-1)
{
    printf("stack is empty");
}
else{
    printf("stack elements:\n");
for(p=top;p>=0;p--)
{
printf("%d\t",stack[p]);
}
}
}
