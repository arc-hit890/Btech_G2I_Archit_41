#include<stdio.h>

int main() {
    int i, j, k, a1, b1, a2, b2, mat1[20][20], mat2[20][20], mat3[20][20], sum=0;
    
    
    printf("Enter the rows and columns of matrix1:\n");
    scanf("%d %d", &a1, &b1);
    printf("Enter the rows and columns of matrix2\n");
    scanf ("%d %d", &a2, &b2);
    if (b1!=a2)
    {
        printf("Multiplication is not possible");
    }
    else 
    {
        printf("Enter the elements of the matrix1:\n");
        for (i = 0; i < a1; i++) 
        {
            for (j = 0; j < b1; j++) 
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter the elements of the matrix2:\n");
        for (i = 0; i < a2; i++) 
        {
            for (j = 0; j < b2; j++) 
            {
            
                scanf("%d", &mat2[i][j]);
            }
        }
        for (i=0;i<a1;i++)
        {
            for (j=0;j<b2;j++)
            {
                for (k=0;k<b1;k++)
                {
                    sum=sum+mat1[i][k]*mat2[k][j];
                }
                mat3[i][j]=sum;
                sum=0;

            }
        }
        printf ("The resultant matrix is:\n");
        for (i=0;i<a1;i++)
        {
            for (j=0;j<b2;j++)
            {
                printf ("%d   ", mat3[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}
      