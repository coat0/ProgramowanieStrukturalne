#include <stdio.h>
int fukncja(int n);
int main(void){
    int n = 0;
    int wynik = 0;
    printf("Podaj mi liczbe naturalna, a ja policze pewien ciag i podam Ci wynik\n");
    scanf("%d", &n);
    wynik = funkcja(n);
    printf("Wynik tego ciagu to %d\n", wynik);
    system("pause");
    return 0;
}

int funkcja(int n){
    if(n!=0) n = 2*funkcja(n-1) + 5;
    else
        return 1;
}