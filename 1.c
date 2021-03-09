#include <stdio.h>
#include <stdlib.h>
void zbiera(char *tab, int n);
int main(void){
    char *lancuch=NULL;
    int n=0;
    printf("Podaj ile znakow chcesz pobrac: ");
    scanf ("%d", &n);
    while((getchar())!='\n');
    lancuch=malloc(sizeof(char)*n+1); /*określa rozmiar łańcucha w pamięci*/
    zbiera(lancuch, n);
    puts(lancuch);
    system("pause");
    free(lancuch); /*opróżnia pamięć*/
    return 0;
}

void zbiera(char *tab, int n)
{
    int i = 0;
    while(i<n)
    {
        *tab=getchar();
        *tab++;
        i++;
    }  
}