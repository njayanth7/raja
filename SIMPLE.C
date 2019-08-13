#include <stdio.h>
#include <conio.h>
/*n.jayanth
1bm17cs050
13/08/19*/
 void push(int e,int s[100],int *t);

	void pop(int s[100],int *t);
	void display(int s[100],int t);


void main(){
int s[100],t=-1,ch,e,a;
a=1;
while(a)
{
printf("enter opertation 1.push 2.pop 3.display 4+.exit");

switch (ch)
{
case 1:

printf("enter element to be pushed");
scanf(" %d",e);
push(e,s,&t);
break;

case 2:


pop(s,&t);
break;

case 3:


display(s,t);
break;

case 4:
default: exit(0);

}}
getch();
}
void push(int e,int s[100],int *t)
{
if(*t>98)
printf("stack overflow");
else
{
*t=*t+1;
s[*t]=e;
}}
void pop(int s[100],int *t)
{ int f;
if(*t<0)
printf("stack underflow");
else
{

f=s[*t];
printf("%d",&f);
*t=*t-1;
}     }
  void display(int s[100],int t)
{        int i;
if(t<0)
printf("stack overrflow");
else
{ printf("the elements are");
for(i=t;i>0;i--)
printf("%d",s[i]);
}
}