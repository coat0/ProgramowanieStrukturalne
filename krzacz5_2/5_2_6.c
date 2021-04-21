#include <stdio.h>
#define MAX 82
void kopiujn(char *nap1, char *nap2, int n);

void kopiujn(char *nap1, char *nap2, int n){
    int i = 0;
    for(i = 0; i<n; i++){
        if(*nap1 != '\0'){   
        *nap2 = *nap1;
        *nap1++;
        *nap2++;
        }
        else break;
    }
    *nap2 = '\0';
}

int main(void){
    char napis1[MAX];
    char napis2[MAX];
    gets(napis1);
    int n = 5;
    kopiujn(napis1, napis2, n);
    printf("%s\n", napis2);
    system("pause");
    return 0;
}