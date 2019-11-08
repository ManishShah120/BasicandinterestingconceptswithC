//WAP to implement buble sort using concepts of dynamic array and pointer?
//Working 8-11-19
#include<stdio.h>
#include<stdlib.h>
int *arr;
int size;
int *poin;

int inputelements()
{
	arr = (int *)malloc(size * (sizeof(int)));
	printf("\nEnter the elements of the array:-\n");
	for(poin = arr;poin < arr+size;poin++)
	{
		scanf("%d", poin);
	}
}

void showarray()
{
	for(poin = arr;poin < arr+size;poin++)
	{
		printf("%d\t",*poin);		
	}
	printf("\n");
}

int sort()
{
	int temp,*poin1;
	for(poin = arr;poin <arr+size;poin++)
	{
		for(poin1 = arr;poin1<arr+size-1;poin1++)
		{
			if(*poin1 > *(poin1+1))
			{
				temp = *poin1;
				*poin1 = *(poin1+1);
				*(poin1+1) = temp;
			}
		}
	}
}

int main()
{
	printf("Enter the size of the array:-");
	scanf("%d", &size);
	inputelements();

	printf("\nThe Elements of the array are:-\n");
	showarray();

	sort();
	
	printf("\nThe sorted array array is:-\n");
	showarray();
	return 0;
}
