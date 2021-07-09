#include <stdio.h>
#include <stdlib.h>


int iloczyn(int tab1[3], int tab2[2], int tab3[3][2])
{
    printf("Zibor  Tab1  wynosi: \n");
    for(int i = 0; i<3; i++)
    {
        printf("%d ", tab1[i]);
    }

    printf("\n");

    printf("Zibor  Tab2  wynosi: \n");
    for(int i = 0; i<2; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");

    printf("Zibor  Tab3  wynosi: \n");
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            tab3[i][j] = tab1[i]*tab2[j];
            printf("(%d) ", tab3[i][j]);
        }
    }
}


int main()
{
    int tab1[3];
    int tab2[2];
    int tab3[3][2];

    for(int i=0; i<3; i++)
    {
        printf("Podaj  element  do zbioru Tab1: ");
        scanf("%d", &tab1[i]);
    }

    printf("\n");

    for(int i=0; i<2; i++)
    {
        printf("Podaj  element  do zbioru Tab2: ");
        scanf("%d", &tab2[i]);
    }

    printf("\n");

    iloczyn(tab1,tab2,tab3);

    return 0;
}
