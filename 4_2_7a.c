#include <stdio.h>
#define STALA 3
void zamiana(int n, int *tab1, int *tab2, int *tab3);
int main(void){
    int calkowita = 0;
    calkowita = STALA;
    int tab1[STALA] = {1,2,3};
    int tab2[STALA] = {4,5,6};
    int tab3[STALA];
    int i = 0;
    zamiana(calkowita, &tab1, &tab2, &tab3);
    for(i=0; i<calkowita; i++) printf("%d\n", tab3[i]);
    system("pause");
    return 0;
}

void zamiana(int n, int *tab1, int *tab2, int *tab3){ 
    int i = 0;
    //przypisanie elementom tablicy tab3 sumy odpowiadających elementów tablic tab1 i tab2 
    for(i = 0; i<n; i++){  
        *tab3=*tab1+*tab2;
        *tab1++;
        *tab2++;
        *tab3++;
    }
}