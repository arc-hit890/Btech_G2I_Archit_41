#include<stdio.h.>
int main()
{
    int a;
    printf("Enter your age");
    scanf("%d",&a);
    if (a>=0 && a<=12)
    {
        printf ("Yor are a child");
    }
    else if (a>=13 && a<=17)
    {
        printf ("You are a Teen");
    }
    else if (a>=18 && a<=60)
    {
        printf ("You are an adult");
    }
    else if (a>60 && a<100)
    {
        printf ("You are senior citizen");
    }
    else 
    {
        printf ("You sholud die");
    }

}