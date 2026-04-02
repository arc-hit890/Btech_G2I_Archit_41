#include<stdio.h>
int main()
{
    int i,j,n,c=1,k;
    printf ("Enter the height of pattern:");
    scanf ("%d",&n);
    printf ("print pattern\n");
    for (i=1;i<=n;i++)
    {
        c=1;
        for (j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
            printf  ("%d",c);
            c*=(i-k)/k;
        }
        printf ("\n");
    }
    return 0;
}