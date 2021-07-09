#include <stdio.h>
#include <stdlib.h>

int NWD(int a, int b)
{
    int c;
    while(a != b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    c = a;

    return c;
}

int NWW(int a, int b)
{
    int d;
    d = (a*b)/NWD(a,b);
    return d;
}

int main()
{
    int a,b;
    int c,d;
    printf("Podaj  liczbe naturalna a: ");
    scanf("%d", &a);
    printf("Podaj  liczbe naturalna b: ");
    scanf("%d", &b);
    c = NWD(a,b);
    printf("NWD jest rowne: %d\n", c);
    d = NWW(a,b);
    printf("NWW jest rowne: %d\n", d);
    return 0;
}
