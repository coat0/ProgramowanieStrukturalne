#include <stdio.h>
#include <string.h>
#include "szablon.txt"
#define MAX 40
int liczydlo(char nazwamsc[]);
int main(void){
    int ilema = 0;
    char nazwamsc[MAX];
    printf("Podaj nazwe miesiaca, a ja podam Ci ile jest dni w roku do tego miesiaca wlacznie\n");
    gets(nazwamsc);
    ilema = liczydlo(nazwamsc);
    printf("Liczba dni od poczatku roku do %s wlacznie: %d\n", nazwamsc, ilema);
    system("pause");
    return 0;
}

int liczydlo(char msc[]){
    struct rok kalendarz[12];
    int rozmiar = sizeof(struct rok);
    FILE *kal;
    int i = 0;
    int ilema = 0;
    int nrmsc = 0;
    kal = fopen("kal.txt", "a+b");
    rewind(kal);
    for(i=0;i<12;i++)
        fread(&kalendarz[i], rozmiar, 1, kal);
    for(i=0; i<12;i++)
    {
    if(strcmp(kalendarz[i].nazwa,msc)==0)
        nrmsc = kalendarz[i].nrmsc;
    }
    for(i=0; i<nrmsc; i++)
    {
        ilema = ilema+kalendarz[i].iledni;
    }
    return ilema;
}