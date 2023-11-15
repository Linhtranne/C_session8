#include <stdio.h>
int main()
{
    int arr[100];
    int i, n, deleteIndex;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Nhap chi so can xoa: ");
    scanf("%d", &deleteIndex);
    for(i=deleteIndex-1; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    printf("Mang sau khi xoa la: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}