//Pointer and dynamically decalred array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,size,*i,sum=0;
	printf("Enter the size of the list:-\n");
	scanf("%d", &size);
	
	ptr = (int *) malloc(size *(sizeof(int)));
	
	printf("Enter the elements of list:-\n");
	for(i=ptr;i<ptr+size;i++)//i=ptr is equivalent to i = &ptr[0]
	{
		scanf("%d",i);
	}
	printf("The entered eleemnts of the list are:-\n");
	for(i=ptr;i<ptr+size;i++)
	{
		printf("%d\t",*i);
		sum = sum + *i;
	}
	printf("\nSum=%d",sum);
	return 0;
}
