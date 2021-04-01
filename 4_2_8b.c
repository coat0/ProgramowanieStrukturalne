#include <stdio.h>
#define STALA 3
#define STALA2 STALA*2
void zamiana(int n, int *tab1, int *tab2, double *tab3);
int main(void){
    int calkowita = 0;
    calkowita = STALA;
    int tab1[STALA] = {1,2,3};
    int tab2[STALA] = {4,5,6};
    double tab3[STALA2];
    int i = 0;
    zamiana(calkowita, &tab1, &tab2, &tab3);
    for(i=0; i<STALA2; i++) printf("%f\n", tab3[i]);
    system("pause");
    return 0;
}

void zamiana(int n, int *tab1, int *tab2, double *tab3){ 
    int i = 0;
    //przypisanie elementów tablicy tab1 i tab2 do tab3 w określonej kolejności;
    for(i = 0; i<n; i++){  
        *tab3=*tab2;
        *tab3++;
        *tab3=*tab1;
        *tab1++;*tab2++;*tab3++;
    }
}