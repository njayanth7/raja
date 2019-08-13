  
#include<stdio.h>
void push(int ele,int st[100],int *t);
int pop(int st[100],int *t);
void display(int st[100],int t);
int main()
{
	
	int stack[100],x,top=-1,choice;
	int item
	clrscr();
	
while(1)
    {
        /*clrscr();*/
        printf("Enter Choice (1: display, 2: insert (PUSH), 3: remove(POP)), 4: Exit..:");
        scanf("%d",&choice);
 
        switch(choice)
        {
            case 1:
                display(stack,top);
            break;
            case 2:
                printf("Enter Item to be insert :");
                scanf("%d",&ITEM);
                push(ITEM,stack,*t);
            break;
            case 3:
                pop(stack,*t));
                x=pop(stack,&top);
	if(x!=-9999)
	printf("popped element is %d \n",x);
            break;
            case 4:
                exit(0);
            default:
            printf("\nInvalid choice.");
            break;
        }

	return 0;
}
void push(int ele,int st[100],int *t)
{
	if(*t==99)
	{
		printf("stack overflow \n");
		return;
	}
	*t=*t+1;
	st[*t]=ele;
}
void display(int st[100],int t)
{
	int i;
	if(t==-1)
	{
		printf("stack is empty \n");
		return;
	}
	for(i=t;i>=0;i--)
	{
		printf("%d \n",st[i]);
	}
}
int pop(int st[100],int *t)
{
	if(*t==-1)
	{
		printf("stack underflow \n");
		return -9999;
	}
	return st[(*t)--];
}
