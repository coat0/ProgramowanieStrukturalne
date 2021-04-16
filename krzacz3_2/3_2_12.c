#include <stdio.h>
int funkcja(int n);

int funkcja(int n){
    double tab[n];
    return *tab;
}
int main(void){
    int n = 5;
    int *tab = NULL;
    tab = funkcja(n);
    system("pause");
    return 0;
}