#include <stdio.h>
#define STALA 3
void zamiana(int n, int *tab1, int *tab2, int *tab3);
int main(void){
    int calkowita = 0;
    calkowita = STALA;
    int tab1[STALA] = {5,6,8};
    int tab2[STALA] = {44,25,1};
    int tab3[STALA] = {10,4,13};
    int i = 0;
    zamiana(calkowita, &tab1, &tab2, &tab3);
    for(i=0; i<STALA; i++) printf("%d %d %d\n", tab1[i], tab2[i], tab3[i]);
    system("pause");
    return 0;
}

void zamiana(int n, int *tab1, int *tab2, int *tab3){ 
    //przypisanie elementom tablicy określonych w zadaniu wartości;
    int najw = 0; int sred = 0; int najm = 0; int i = 0;
    for(i = 0; i<n; i++){
        //znalezienie największej wartości
        if(*tab1>*tab2)
            if(*tab1>*tab3) najw = *tab1;
            else najw = *tab3;
        else if(*tab2>*tab3) najw = *tab2;
        else najw = *tab3;
        //znalezienie najmniejszej wartości;
        if(*tab1<*tab2)
            if(*tab1<*tab3) najm = *tab1;
            else najm = *tab3;
        else if(*tab2<*tab3) najm = *tab2;
        else najm = *tab3;
        //znalezienie środkowej wartości;
        if(*tab1>*tab2)
            if(*tab1<*tab3) sred = *tab1;
            else sred = *tab3;
        else if(*tab2<*tab3) sred = *tab2;
        else if(*tab1>*tab3) sred = *tab1;
        else sred = *tab3;
        //przypisanie wartości
        *tab1 = najw;
        *tab2 = sred;
        *tab3 = najm;
        *tab1++; *tab2++; *tab3++;
    }


}