#include <stdio.h>
int main()
{
    int arr[100];
    int i, n, findNumber, sum = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap phan tu cua mang: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Nhập giá trị cần tìm */
    printf("gia tri can tim: ");
    scanf("%d", &findNumber);

    printf("chi so cac phan tu co gia tri %d la: ", findNumber);
    for(i=0; i<n; i++)
    {
        if(arr[i] == findNumber)
        {
            printf("%d ", i);
            sum += arr[i];
        }
    }
    printf("\nTong cac phan tu co gia tri %d la: %d", findNumber, sum);

    return 0;
}