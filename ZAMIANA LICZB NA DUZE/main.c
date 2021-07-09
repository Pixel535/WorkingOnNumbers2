#include <stdio.h>
#include <stdlib.h>


int main()
{
    char *a;
    printf("Podaj  wyraz w malych literach: ");
    gets(a);
    int n = 0;
    while(*(a+n))
    {
        n++;
    }
    printf("Twoj wyraz: \n%s\n", a);

    printf("Twoj wyraz zamieniony na  duze litery: \n");
    for(int i = 0; i<n; i++)
    {
        a[i]=a[i]-32;
        printf("%c", a[i]);
    }
    return 0;
}
