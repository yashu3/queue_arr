#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front=-1,rear=-1;
int n=5;
void push();
void display();
int pop();
int main()
{
   int n,a;
   while(1)
 {

   printf("1.PUSH\n");
   printf("2.display\n");
   printf("3.POP\n");
   printf("4.quit\n");
   scanf("%d",&n);
   printf("\n\n");
   switch(n)
   {
   case 1:
   push();

       break;
   case 2:
   display();
         break;
   case 3:
   a=pop();
   printf("%d\n",a);
         break;
   case 4:
        exit(1);
        break;
   default:
       printf("enter right choice");

}

}
return 0;
}
void push()
{
int x;
if(rear==n-1)
printf("queue Overflow\n");
else if(rear==-1 && front==-1)
{
printf("Enter data\n");
scanf("%d",&x);
rear=front=0;
queue[rear]=x;
}
else
{ rear++;
printf("Enter data\n");
scanf("%d",&x);
queue[rear]=x;
}
}
int pop()
{
int a;
if(rear==-1 && front==-1)
printf("queue underflow\n");
else if(rear==front)
{
a=queue[front];
rear=-1;
front=-1;
}
else
{
a=queue[front];
front++;
}
return a;
}
void display()
{
for(int i=front;i<=rear;i++)
printf("%d",queue[i]);
printf("\n");
}
