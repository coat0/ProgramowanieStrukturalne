#include <stdio.h>
#include <string.h>
#include "szablon.txt"
#define MAX 40
int liczydlo(int dzien, char nazwamsc[], int nrmiesiaca, int rok);
int main(void){
    int ilema = 0;
    char nazwamsc[MAX];
    int dzien = 0;
    int rok = 0;
    int msclicz = 0;
    printf("Podaj dzien, miesiac i rok a ja podam Ci liczbe dni w roku do tego dnia.\n");
    printf("Podaj dzien:\n");
    scanf("%d",&dzien);
    printf("Podaj miesiac w formie \"styczen\", \"STY\" lub \"1\"\n");
    scanf("%d", &msclicz);
    gets(nazwamsc);
    printf("Podaj rok:\n");
    scanf("%d", &rok);
    if(msclicz != 0)
        ilema = liczydlo(dzien, nazwamsc, msclicz, rok);
    else
        ilema = liczydlo(dzien, nazwamsc, msclicz, rok);
    printf("Liczba dni od poczatku %d do tego dnia wynosi: %d\n", rok, ilema);
    system("pause");
    return 0;
}

int liczydlo(int dzien, char msc[], int msclicz, int rok){
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
        if(strcmp(kalendarz[i].nazwa,msc)==0||strcmp(kalendarz[i].skrot,msc)==0)
            nrmsc = kalendarz[i].nrmsc;
    }
    if(nrmsc==0) nrmsc = msclicz;
    if(nrmsc!=1){
        for(i=0; i<nrmsc-1; i++)
        {
            ilema = ilema+kalendarz[i].iledni;
        }
    }
    if(nrmsc!=2){
        while(dzien>kalendarz[nrmsc-1].iledni){
        printf("Wybrany miesiac nie ma tylu dni, podaj dzien jeszcze raz.\n");
        scanf("%d", &dzien);
        }
    } 
    else if(nrmsc==2 && rok%4==0){
        while(dzien>(kalendarz[nrmsc-1].iledni + 1)){
        printf("Wybrany miesiac nie ma tylu dni, podaj dzien jeszcze raz.\n");
        scanf("%d", &dzien);
        }
    }
    else{
        while(dzien>(kalendarz[nrmsc-1].iledni + 1)){
        printf("Wybrany miesiac nie ma tylu dni, podaj dzien jeszcze raz.\n");
        scanf("%d", &dzien);
        }
    }
    ilema = ilema+dzien;
    if (rok %4 == 0 && nrmsc>2) ilema = ilema + 1;
    return ilema;
}