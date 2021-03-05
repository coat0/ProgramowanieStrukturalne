#include <stdio.h>
int main(void){
    int n,i, wynik;
    printf("Podaj nieujemna liczbe calkowita, a ja podam Ci sume kwadratow liczb od 0 do tej liczby\n");
    scanf("%d", &n);
    if (n<0)
        return 0;
    wynik=0;
    for (i=0; i<=n; i++)
        wynik=wynik+(i*i);
    printf("Wynik: %d\n", wynik);
    system("pause");
    return 0;
}