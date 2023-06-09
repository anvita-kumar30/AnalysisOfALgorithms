#include <stdio.h>
#include <conio.h>
void readArray(int n, int array[n])
{
    printf("\nEnter the array elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}
void displayArray(int n, int array[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}
void insertionSort(int n, int array[n])
{
    for (int j = 1; j < n; j++)
    {
        int key = array[j];
        int i = j - 1;
        while ((i >= 0) && (array[i] > key))
        {
            array[i + 1] = array[i];
            i = i - 1;
        }
        array[i + 1] = key;
        printf("\n\nPass Number %d : ", j);
        displayArray(n, array);
    }
}
void main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int array[n];
    readArray(n, array);
    printf("\nBefore swapping the array elements are as follows:\n");
    displayArray(n, array);
    insertionSort(n, array);
    printf("\n\nAfter swapping the array elements are as follows:\n");
    displayArray(n, array);
}