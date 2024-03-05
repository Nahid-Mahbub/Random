#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 1};
    int a, value, hole;
    for(int i = 1; i < 3; i++)
    {
        value = arr[i];
        hole = i;
        while(hole > 0 && arr[hole - 1] > value)
        {
            arr[hole] = arr[hole - 1];
            hole --;
        }
        arr[hole] = value;
    }
    printf("Array\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}