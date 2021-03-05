#include <stdio.h>
#define ILE 3
int main(void){
    int tab[ILE], i, najw;
    printf("Podaj 3 liczby calkowite, a ja podam najwieksza z nich\n");
    for(i=0;i<ILE; i++)
    {
        scanf("%d", &tab[i]);
    }
    najw=tab[0];
    for(i=0; i<ILE; i++)
    {
        if(tab[i]>najw)
            najw=tab[i];
    }

    printf("Najwieksza z podanych liczb to %d\n", najw);


    system("pause");
    return 0;
}