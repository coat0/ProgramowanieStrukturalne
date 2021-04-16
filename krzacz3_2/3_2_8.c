#include <stdio.h>
void funkcja(int *a, int *b);

void funkcja(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main(void){
    int a = 5;
    int b = 10;
    printf("Przed zamiana a = %d    b = %d\n", a, b);
    funkcja(&a, &b);
    printf("Po zamianie a = %d    b = %d\n", a, b);
    system("pause");
    return 0;
}