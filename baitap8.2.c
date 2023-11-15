#include <stdio.h>

int main()
{
    int row, col, i, j;
    float arr[100][100], sum = 0;

    printf("hang: ");
    scanf("%d", &row);

    printf("cot: ");
    scanf("%d", &col);

    printf("nhap cac phan tu cua mang:\n");

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%f", &arr[i][j]);
        }
    }

    printf("\nCac gia tri chan trong mang la: \n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            if ((int)arr[i][j] % 2 == 0)
            {
                printf("%.2f ", arr[i][j]);
                sum += arr[i][j];
            }
        }
    }

    printf("\ntong phan tu trong mang la: %.2f", sum);

    return 0;
}