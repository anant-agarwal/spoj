#include<stdio.h>
#include<malloc.h>
struct node
{
	char data;
	struct node *link;
};
int priority(char data)
{
	if(data=='+')
	return 0;
	if(data=='-')
	return 1;
	if(data=='*')
	return 2;
	if(data=='/')
	return 3;
	if(data=='^')
	return 4;
	if(data=='(')
	return 5;
}
int push(struct node **top,char data)
{
	struct node *temp=malloc(sizeof(struct node));
	temp->data=data;
	if(*top==NULL)
	{
		*top=temp;
		temp->link=NULL;
		return;
	}
	temp->link=*top;
	*top=temp;
}
int pop(struct node **top)
{
	if(*top==NULL)
	return;
	char data;
	struct node *temp=*top;
	data=temp->data;
	*top=(*top)->link;
	free(temp);
	return data;
}
int main()
{
	char a[100][400];
	int num;
	struct node *top=NULL;
	char b[100][400];
	scanf("%d",&num);
	int i=0,j=0;	
	for(i=0;i<num;i++)
	{
		scanf("%s",a[i]);
		int count=0;
		for(j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]>=97 && a[i][j]<=122)
			b[i][count++]=a[i][j];
			else
			{
				if(top==NULL)
				{	
					push(&top,a[i][j]);
					continue;
				}
				char popopr=pop(&top);
				if(popopr=='(')
				{
					push(&top,popopr);
					push(&top,a[i][j]);
					continue;
				}		
				if(a[i][j]==')')
				{
					while(popopr!='(')
					{
						b[i][count++]=popopr;
						popopr=pop(&top);
					}
					continue;
				}		
				if(priority(popopr)>priority(a[i][j]))
				{
					b[i][count++]=popopr;
					push(&top,a[i][j]);
				}
				else
				{
					push(&top,popopr);
					push(&top,a[i][j]);
					continue;
				}
			}
		}
		while(top!=NULL)
		{
			char oper=pop(&top);
			if(oper!='(')
			b[i][count++]=oper;
		}
	}
	for(i=0;i<num;i++)
	printf("%s\n",b[i]);
	return 0;
	
}

