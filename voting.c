#include<stdio.h>
int main ()
{
    int a;
    printf("Enter your age\t");
    scanf("%d",&a);
    if (a>17)
    {
        printf ("You are eligiable for Voting");
       
    }
    else 
    {
        printf ("You are not eligiable for voting");
    }
    return 0;
}