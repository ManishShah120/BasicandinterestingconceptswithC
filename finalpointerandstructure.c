//concepts of pointer,structure,dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
struct info
{
	int roll;
	char name[30];
	char sem[5];
	char branch[5];
};

int main()
{
	int size;
	printf("Enter the number of student:-\n");
	scanf("%d", &size);
	
	/*Dynamic memory allocation*/
	struct info *data,*ptr;
	data = (struct info *) malloc(size *(sizeof(struct info)));
	
	
	/*Taking Inputs*/
	printf("Student Data:-\n\n");
	printf("Input Data\n");
	printf("Roll\tName\tSem\tBranch\n");
	for(ptr=data;ptr<data+size;ptr++)//ptr=data is same as  ptr = data[0]
	{
		scanf("%d %s %s %s",&ptr->roll,ptr->name,ptr->sem,ptr->branch);//ptr->is same as data[0].
	}
	
	
	/*Displaying the datas*/
	printf("\nEntered data:-\n");
	printf("Roll\tName\tSem\tBranch\n");
	for(ptr=data;ptr<data+size;ptr++)
	{
		printf("%d\t%s\t%s\t%s\n",ptr->roll,ptr->name,ptr->sem,ptr->branch);
	}
	
	return 0;
}
