#include <stdio.h>
#include <stdlib.h>
int losowe()
{
    return(rand());
}

int wyp(int n)
{
    int tab[n];
    int a,b;
    for(int i = 0; i<n; i++)
    {
        *(tab+i) = losowe();
    }

    b = tab;

    for(int i = 0; i<n; i++)
    {
        printf("%d ", *(tab+i));
    }

    for(int j = 0; j<n; j++)
    {
        if(*(tab+j) > a)
        {
            a = *(tab+j);
        }
        if(*(tab+j) < b)
        {
            b = *(tab+j);
        }
    }
    printf("\nmax: %d\n", a);
    printf("min: %d\n", b);
}

int main()
{
    srand(time(0));
    int n;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);
    wyp(n);
    return 0;
}
