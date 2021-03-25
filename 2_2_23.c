#include <stdio.h>
int fukncja(int n);
int main(void){
    int n = 0;
    int wynik = 0;
    printf("Podaj mi liczbe naturalna, a ja policze ciag Fibonacciego do tego elementu\n");
    scanf("%d", &n);
    wynik = funkcja(n);
    printf("Wynik ciagu Fibonacciego do tego elementu wynosi %d\n", wynik);
    system("pause");
    return 0;
}

int funkcja(int n){
    if(n==1) return 1;
    else if(n!=0){
    n = funkcja(n-1) + funkcja(n-2);
    return n;
    }
    else
        return 0;
}