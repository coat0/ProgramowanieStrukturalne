#include <stdio.h>
int funkcja(int n);
int main(void){
    int a = 0;
    int wyswietl;
    printf("Podaj liczbe calkowita,a ja podniose 2 do tej potegi\n");
    scanf("%d", &a);
    wyswietl = funkcja(a);
    printf("%d\n", wyswietl);
    system("pause");
    return 0;
}

funkcja(int n){
    int i;
    int wynik = 1;
    for(i=0; i<n; i++) wynik = wynik * 2; 
    return wynik;
}