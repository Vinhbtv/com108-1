#include<stdio.h>
int main(){
    int matrix[3][3] = {{3, 9, 11}, {2, 6, 15}, {4, 7, 24}};
    printf("Mang 2 chieu la:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // nhap vao 1 so
    int n;
    printf("Nhap so tu 1 den 100: ");
    scanf("%d", &n);

    // Tim vi tri
    int f = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == n)
            {
                printf("So %d nam o vi tri (%d, %d) trong mang 2 chieu\n",n,i,j);
                f = 1;
            }
        }
    }
    if (!f)
    {
        printf("So %d khong co trong mang 2 chieu\n",n);
    }

    return 0;
}

