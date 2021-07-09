#include <stdio.h>
#include <stdlib.h>

int szyfr_cezar(char a[], int n)
{
    n = strlen(a);
    for(int i = 0; i<n; i++)
    {
        a[i] = a[i]-32;
    }
    for(int i = 0; i<n; i++)
    {
        a[i] = 65 + ( a[i] - 62 ) % 26;
    }
    return 0;
}

int deszyfr_cezar(char a[], int n)
{
    n = strlen(a);
    for(int i = 0; i<n; i++)
    {
        a[i] = 65 + ( a[i] - 42 ) % 26;
    }
    return 0;
}

int main()
{
    int n;
    printf("Podaj dlugosc szyfru cezara: ");
    scanf("%d", &n);
    char a[n];
    printf("Podaj wyraz o max dlugosci %d : ", n);
    scanf("%s", a);
    szyfr_cezar(a,n);
    printf("Tekst zaszyfrowany: \n");
    for(int i = 0; i<n; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    char  b[n];
    deszyfr_cezar(a,n);

    printf("Tekst rozszyfrowany: \n");
    for(int i = 0; i<n; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}
