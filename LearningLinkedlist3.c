//Learning Linkedlist3
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;//type member1
	struct node *link;
};
struct node *start = NULL;

/*From here to*/
void createHead(int num)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));//syntax:pointer = (caste-type *)malloc(times *sizeof(type));
	temp->data = num;
	temp->link = NULL;
	start = temp;
}

void display()
{
	printf("\nThe List is:-\n");
	struct node *p;
	p=start;//this means p = &start[0],we have initilized our pointer  p to start[0]
	if(start == NULL)
	{
		printf("List is Empty\n");
		return;
	}
	while(p != NULL)
	{
		printf("%d\t",p->data);
		p = p->link;
	}
}

void count()
{
	int count=0;
	struct node *c;
	c = start;
	if(start==NULL)
	{
		printf("\nTotal %d Elements",0);
	}
	else
	{
		while(c != NULL)
		{
			c = c->link;
			count++;
		}
	}
	printf("\nTotal %d Elements.",count);
}

int search(int num)
{
	struct node *p;
	p=start;//p=&start[0]
	int pos=0;
	while(p != NULL)
	{
		pos++;
		if(p->data == num)
		{
			printf("\n%d is found at %d position.",num,pos);
		}
		p = p->link;
	}
}

void addatbeg(int num)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = num;
	
	temp->link = start;
	start = temp;//We want to make this node as the first node so we are updating start by the new node that is temp;
}
/*Here it easy*/
void addatend(int num)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = num;
	temp->link = NULL;
	
	struct node *p;//A pointer p to point the last node;
	p = start;//p = &start[0]
	while(p->link != NULL)
	{
		p = p->link;
	}
	p->link = temp;
}

void replaceat(int num,int pos)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = num;
	struct node *poin;
	poin = start;
	for(int i=1;i<pos;i++)
	{
		poin = poin->link;
	}
	poin->data = temp->data;
}

void addafter(int num,int pos)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = num;
	struct node *poin;
	poin = start;
	for(int i=1;i<pos;i++)
	{
		poin = poin->link;
	}
	temp->link = poin->link;
	poin->link = temp;
}

void delet(int num)
{
	struct node *p,*temp;
	p=start;
	while(p->link != NULL)
	{
		if(p->link->data == num)
		{
			temp = p->link;
			p->link = temp->link;
			free(temp);
			return;
		}
		p = p->link;
	}

}


int main()
{
	createHead(0);
	addatbeg(-1);
	addatend(1);
	display();
	replaceat(12,2);//(number,position)
	display();
	addafter(13,1);
	display();
	search(0);
	count();
	delet(12);
	display();
	return 0;
}
