#include <stdio.h>
#define MAX 82
int porownaj(char *nap1, char *nap2);

int porownaj(char *nap1, char *nap2){
    int i = 1;
    while(*nap1 != '\0' || *nap2 != '\0'){
        if(*nap1 != *nap2) i = 0;
        *nap1++;
        *nap2++;
    }
    return i;
}


int main(void){
    char napis1[MAX];
    char napis2[MAX];
    gets(napis1);
    gets(napis2);
    if(porownaj(napis1, napis2)) printf("Napisy sa takie same\n");
    else printf("Napisy roznia sie\n");
    system("pause");
    return 0;
}