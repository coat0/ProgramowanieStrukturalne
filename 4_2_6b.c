#include <stdio.h>
#define STALA 3
void zamiana(int n, char *tab1, char *tab2);
int main(void){
    int calkowita = 0;
    calkowita = STALA;
    char tab1[STALA] = {'a','b','c'};
    char tab2[STALA] = {'d','e','f'};
    int i = 0;
    zamiana(calkowita, tab1, tab2);
     for(i=0; i<calkowita; i++) printf("%c\n", tab2[i]);
    system("pause");
    return 0;
}

void zamiana(int n, char *tab1, char *tab2){ 
    int i = 0;
    char temp = NULL;
   //przypisanie wartości tab1 do tab 2 w odwrotnej kolejności
    for(i = 0; i<n-1; i++) *tab2++;
    
    for(i = 0; i<n; i++){  
    *tab2=*tab1;
    *tab1++;
    *tab2--; 
    }
}