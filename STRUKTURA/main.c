#include <stdio.h>
#include <stdlib.h>

struct a
{
    char imie[50];
    char nazwisko[50];
    long long int pesel;
    char zainteresowania[256];
};

int main()
{
    struct a osoba;

    printf("Podaj zainteresowania: ");
    fgets(osoba.zainteresowania, 256, stdin);

    printf("Podaj imie: ");
    scanf("%s", osoba.imie);

    printf("Podaj nazwisko: ");
    scanf("%s", osoba.nazwisko);

    printf("Podaj pesel: ");
    scanf("%lld", &osoba.pesel);

    printf("\n\n%p  Zainteresowania: %s", osoba.zainteresowania, osoba.zainteresowania);
    printf("%p  Imie: %s\n", osoba.imie, osoba.imie);
    printf("%p  Nazwisko: %s\n", osoba.nazwisko, osoba.nazwisko);
    printf("%p  Pesel: %lld\n", osoba.pesel, osoba.pesel);

    return 0;
}
