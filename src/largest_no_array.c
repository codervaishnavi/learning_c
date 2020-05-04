#include<stdio.h>

int main()
{
	int size,i,largest,n;

  printf("\n enter the size of the array: ");
	scanf("%d",&size);

  int array[size];
  printf("\n Enter %d elements of the array:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}

	largest=array[0];

  for(i=0; i<size; i++)
	{
		if(largest < array[i])
			largest=array[i];
  }

	printf("\nlargest elements present in the given array is: %d\n",largest);

	return 0;
}
