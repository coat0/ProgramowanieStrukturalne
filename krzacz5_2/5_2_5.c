#include <stdio.h>
#define MAX 82
void przepisz(char *nap1, char *nap2);

void przepisz(char *nap1, char *nap2){
    while(*nap1 != '\0'){
        *nap2 = *nap1;
        *nap1++;
        *nap2++;
    }
}

int main(void){
    char napis1[MAX];
    char napis2[MAX];
    gets(napis1);
    przepisz(napis1, napis2);
    printf("%s\n", napis2);
    system("pause");
    return 0;
}