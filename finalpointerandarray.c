//Pointer and arrray/
#include<stdio.h>
int main()
{
	int arr[10],sum=0,*ptr;
	
	printf("Input the elements of the pointer:-\n\n");
	for(ptr=arr;ptr<arr+10;ptr++)
	{
		scanf("%d", ptr);
		//ptr = arr is equivalent to ptr   = &arr[0]
		//							 ptr+1 = &arr[1];
	}
	printf("The enetred elements are:-\n\n");
	for(ptr=arr;ptr<arr+10;ptr++)
	{
		printf("%d\t",*ptr);
		sum += *ptr;
	}
	printf("\nThe sum of the above elemets are:-%d",sum);
	return 0;
}
