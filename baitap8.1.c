#include <stdio.h>
int main()
{
    int arr[100];
    int i, max, min, size;
    printf("Nhap kich thuoc: ");
    scanf("%d", &size);
    printf("Nhap phan tu: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for(i=1; i<size; i++)
    {

        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("max = %d\n", max);
    printf("min = %d", min);

    return 0;
}