#include <stdio.h>
void funkcja (int *a, int *b);
int main(void){
    int jeden, dwa;
    scanf("%d %d", &jeden, &dwa);
    printf("Przed zamiana\n");
    printf("a = %d  b = %d\n", jeden, dwa);
    funkcja(&jeden, &dwa);
    printf("Po zamianie\n");
    printf("a = %d  b = %d\n", jeden, dwa);
    system("pause");
    return 0;
}

void funkcja(int *a, int *b){
    int temp = *a;
    if(*a>*b){
        *a = *b;
        *b = temp;
    }
}