#include <stdio.h>
int main()
{
    int arr[100];
    int i, n, updateValue, updateIndex;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can cap nhat: ");
    scanf("%d", &updateValue);
    printf("Nhap chi so can cap nhat: ");
    scanf("%d", &updateIndex);
    arr[updateIndex-1] = updateValue;
    printf("mang sau khi cap nhat la: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}