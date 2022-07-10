#include <stdio.h>
#include <math.h>

int main()
{
    float xy[20][20], matrix[3][4], ratio, a;
    float sum_x = 0, sum_y = 0, sum_x2 = 0, sum_x3 = 0, sum_x4 = 0, sum_xy = 0, sum_x2y = 0;
    int i, j, k, n;
    printf("Enter no of data: ");
    scanf("%d", &n);
    printf("Enter the data: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &xy[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        sum_x += xy[0][i];
        sum_y += xy[1][i];
        sum_x2 += pow(xy[0][i], 2);
        sum_x3 += pow(xy[0][i], 3);
        sum_x4 += pow(xy[0][i], 4);
        sum_xy += xy[0][i] * xy[1][i];
        sum_x2y += pow(xy[0][i], 2) * xy[1][i];
    }
    matrix[0][0] = n;
    matrix[0][1] = sum_x;
    matrix[0][2] = sum_x2;
    matrix[0][3] = sum_y;
    matrix[1][0] = sum_x;
    matrix[1][1] = sum_x2;
    matrix[1][2] = sum_x3;
    matrix[1][3] = sum_xy;
    matrix[2][0] = sum_x2;
    matrix[2][1] = sum_x3;
    matrix[2][2] = sum_x4;
    matrix[2][3] = sum_x2y;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i != j)
            {
                ratio = matrix[j][i] / matrix[i][i];
                for (k = 0; k < 4; k++)
                {
                    matrix[j][k] -= ratio * matrix[i][k];
                }
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        a = matrix[i][i];
        for (j = 0; j < 4; j++)
        {
            matrix[i][j] /= a;
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n%c => %.2f", 97 + i, matrix[i][3]);
    }
}