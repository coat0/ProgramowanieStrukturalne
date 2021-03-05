#include <stdio.h>
int main(void){
    int wyb;
    float x,y, wynik;

    printf("Wybierz działanie arytmetyczne:\n");
    printf("1)Dodawanie     3)Mnozenie\n");
    printf("2)Odejmowanie   4)Dzielenie\n");
    scanf("%d", &wyb);

    printf("Teraz podaj dwie liczby:\n");
    scanf("%f %f", &x, &y);

    if(wyb==1)
    {
        wynik=x+y;
        printf("Wynik: %f\n", wynik);
    }

    if(wyb==2)
    {
        wynik=x-y;
        printf("Wynik: %f\n", wynik);
    }

    if(wyb==3)
    {
        wynik=x*y;
        printf("Wynik: %f\n", wynik);
    }

    if(wyb==4)
    {
        if(y!=0)
        {
        wynik=x/y;
        printf("Wynik: %f\n", wynik);
        }
        else
        {
            printf("Nie mozna dzielic przez 0!!!\n");            
        }
    }

    system("pause");
    return 0;
}