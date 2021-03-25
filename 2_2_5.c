#include <stdio.h>
int funkcja(int n);
int main(void){
    int a = 0;
    int wyswietl;
    wyswietl = funkcja(a);
    printf("%d\n", wyswietl);
    system("pause");
    return 0;
}

funkcja(int n){
    n = 2;
    return n;
}