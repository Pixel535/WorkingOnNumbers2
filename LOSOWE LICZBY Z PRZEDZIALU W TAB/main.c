#include <stdio.h>
#include <stdlib.h>

int losowe(int min, int max)
{
    return (rand()%(max-min+1)+min);
}

int tab(int a, int b)
{
    int n;
    n=b-a+1;
    int tab[n];

    for(int i = 0; i<n; i++)
    {
        *(tab+i) = losowe(a,b);
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d ", *(tab+i));
    }

    return 0;
}

int main()
{
    srand(time(0));
    int a,b;
    printf("Podaj minimum zbioru: ");
    scanf("%d", &a);

    printf("Podaj maximuim zbioru: ");
    scanf("%d", &b);
    printf("Podany przedzial wynosi <%d,%d>\n", a, b);
    tab(a,b);

    return 0;
}
