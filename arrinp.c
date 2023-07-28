#include <stdio.h>
int main()
{
	int arr[100]={1,2,3,4,5,6,7,8,9,10};
	int i, x, pos, n = 10;
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);}
    printf("\nElement to be inserted: ");
    scanf("%d",&x);
    printf("\nEnter the position: ");
    scanf("%d",&pos);
	n++;
	for (i = n - 1; i >= pos; i--)
		arr[i] = arr[i - 1];
	arr[pos - 1] = x;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i],"\n");
	return 0;1
}