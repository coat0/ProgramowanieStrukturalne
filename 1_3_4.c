#include <stdio.h>
int main(void){
    int x,y, bezx, bezy, najw;
    printf("Podaj 2 liczby calkowite, a ja podam ta o najwiekszej liczbie bezwzglednej\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if(x<0)
        bezx=x*(-1);
    else
        bezx=x;

    if(y<0)
       bezy=y*(-1);
    else
        bezy=y;

    if(bezx>bezy)
        najw=x;
    else
        najw=y;

    printf("Najwieksza wartosc bezwzgledna z podanych liczb ma %d\n", najw);


    system("pause");
    return 0;
}