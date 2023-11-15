#include <stdio.h>
int main()
{
    int arr[100];
    int i, n, addValue, addIndex;
    printf("Nhap so can tim cua mang: ");
    scanf("%d", &n);
    printf("nhap cac phan tu cua mang: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("gia tri can tren: ");
    scanf("%d", &addValue);
    printf("chi so can chen: ");
    scanf("%d", &addIndex);
    for(i=n; i>=addIndex; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[addIndex-1] = addValue;

    printf("Mang sau khi chen la: ");
    for(i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}