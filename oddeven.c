#include<stdio.h>
int main ()
{
    int n, i, Sumeven=0, Sumodd=0;
    printf ("Enter number");
    scanf (" %d",&n);
    for (i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            Sumeven+=i;
        }
        else 
        {
            Sumodd+=i;
        }
        
    }
    printf ("Sum of even numbers is %d\n",Sumeven);
    printf ("Sum of odd numbers is %d\n",Sumodd);
    return 0;
}