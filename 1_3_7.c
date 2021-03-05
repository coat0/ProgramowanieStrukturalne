#include <stdio.h>
int main(void){
    printf("a*x^2+b*x+c=0\n");
    printf("Podaj wspolczynniki a, b i c rownania.\n");
    float a,b,c,x1,x2,delta;

    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b) - (4*a*c);

    if(delta==0)
    {
        x1=((-1)*b)/(2*a);
        printf("Pierwiastek tego rownania to %f\n", x1);
    }

    else if(delta>0)
    {
        delta=sqrt(delta);
        x1=((-1)*b-delta)/(2*a);
        x2=((-1)*b+delta)/(2*a);
        printf("Pierwiastki tego rownania to x=%f i x=%f\n", x1,x2);
    }

    else if(delta<0)
    {
        printf("To rownanie nie ma pierwiastkow\n");
    }

    system("pause");
    return 0;
}