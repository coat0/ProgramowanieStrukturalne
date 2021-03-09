#include <stdio.h>
#include <stdlib.h>
char zbiera(char *tab, char n);
int main(void){
    char *lancuch="Jestem sobie lancuchem";
    char n=NULL;
    char *skrocony;
    printf("Podaj znak ktory mam odszukac w lanuchu: \n");
    scanf ("%c", &n);
    while((getchar())!='\n');
    zbiera(lancuch, n); /*funkcja zwraca wskaznik do szukanego znaku*/
    system("pause");
    free(lancuch); /*opróżnia pamięć*/
    return 0;
}

char zbiera(char *tab, char n)
{
    int i=0;
    for(i=0;*tab!='\0';i++)
    {
        if(*tab==n)
            return *tab;
        *tab++;
    }
}