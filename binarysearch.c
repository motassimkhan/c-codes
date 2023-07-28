#include <stdio.h>
int binarySearch(int array[], int low, int size, int num){
    if (size >= low){
        int mid = low + (size - 1)/2;
        if (array[mid] == num) return mid;
        if (array[mid] > num)  return binarySearch(array, low, mid - 1, num);
        if (array[mid] < num)  return binarySearch(array, mid + 1, size, num);
        else return binarySearch(array, mid + 1, size, num);
    }
    return -1;
}
int main()
{
    int num, array[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(array) / sizeof(array[0]);
    {printf("Enter an element: ");
    scanf("%d", &num);}
    int result = binarySearch(array, 0, size - 1, num);
    if (result == -1) printf("Element is not in array \n");
    else printf("element is found at index position %d\n",result);
    return 0;
}