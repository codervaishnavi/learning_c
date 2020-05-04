#include<stdio.h>
int main()
{
	int n,i,d,a[100],b[100];
	printf("enter the number of elements in array\n");
	scanf("%d",&n);
	printf("enter array elements in array\n ");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
		b[(n-1)-i] = a[i];
	printf("Reverse array is\n");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
    printf("\n");
	return 0;
}
