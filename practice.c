#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    printf("Value of arr[0] is : %d\n",*ptr);
    ptr++;
    printf("Value of arr[1] is : %d\n",*ptr);
    return 0;
}