#include <stdio.h>
int binarySearch(int array[], int low; int size; int num){
    if (size >= low){
    int mid = low + (size-1) / 2;
    if(array[mid] == num) return mid;
    if(array[mid] >= num) return binarySearch(array, low, mid-1, num);
    if (array[mid]) 
    }
}

int main()
{
    int ch;
    printf("\tPrograms to run:\n1.binary search\n2.bubble sort\n3.selection sort\nSelect Choice: ");
    scanf("%d",&ch);
    //if (ch == 1) binarySearch();
    //if (ch == 2) bubbleSort();
    //if (ch == 3) selectionSort();
    else printf("Invalid Choice");
    return 0;
}