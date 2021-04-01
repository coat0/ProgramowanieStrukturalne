#include <stdio.h>
#define STALA 3
void zamiana(int n, int *tab1, int *tab2, int *tab3);
int main(void){
    int calkowita = 0;
    calkowita = STALA;
    int tab1[STALA] = {1,2,3};
    int tab2[STALA] = {4,5,6};
    int tab3[STALA] = {7,8,9};
    int i = 0;
    zamiana(calkowita, &tab1, &tab2, &tab3);
    for(i=0; i<calkowita; i++) printf("%d\n", tab1[i]);
    system("pause");
    return 0;
}

void zamiana(int n, int *tab1, int *tab2, int *tab3){ 
    int i = 0;
    int temp1 = 0; int temp2 = 0;
    //przypisanie elementów tablicy tab1 do tab2, tab2 do tab3, tab3 do tab1;
    for(i = 0; i<n; i++){  
        temp1 = *tab2;
        temp2 = *tab3;
        *tab2 = *tab1;
        *tab3 = temp1;
        *tab1 = temp2;
        *tab1++; *tab2++; *tab3++;
    }
}