#include <stdio.h>
int potega(int n, int m);
int main(void){
    printf("Podaj dwie nieujemne liczby calkowite, z czego jedna z nich jest różna od zera, a ja podniose pierwsza do potegi okreslonej przez druga \n");
    int n,m, wynik;
    scanf("%d %d", &n, &m);
    if(n==0 && m==0){
        printf("Podales zle liczby!!!\n");
        return 0;
    }
    wynik = potega(n,m);
    printf("%d do potegi %d wynosi %d\n", n, m, wynik);
    system("pause");
    return 0;
}
int potega(int n, int m){
    int i;
    int wynik = 1;
    if(n==0) wynik = n;
    for(i=0;i<m;i++) wynik = wynik*n; 
    return wynik;
}